/* 1.CPU_Usage
 * 2.Memory_Usage
 * 3.Process list & stat
 * 4.Realtime print
 * 5.User Interaction
 */
#include <ctype.h>
#include <dirent.h>
#include <math.h>
#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

volatile sig_atomic_t stop_flag = 0;
void signal_handler(int sig)
{
    stop_flag = 1;
}
/* 1 user : time usage user mode
 * 2 nice : time usage lower priority user mode
 * 3 system : time usage kernel mode
 * 4 idle : idle time
 * 5 iowait : time usage for waiting I/O
 * 6 irq : time usage HW Interrupt
 * 7 softirq : time usage soft HW Interrupt
 */
#define USER 1
#define NICE 2
#define SYSTEM 3
#define IDLE 4
#define IOWAIT 5
#define IRQ 6
#define SOFTIRQ 7

void* CPU_Usage(void* arg)
{
    while (!stop_flag)
    {
        // Read File
        FILE* stat = fopen("/proc/stat", "r");

        if (stat == NULL)
            perror("Can't Read /proc/stat");
        // Get Line in File
        char stat_buffer[256];

        fgets(stat_buffer, sizeof(stat_buffer), stat);
        fclose(stat);
        // Parsing Line
        const char delim[] = " ";
        char* token = strtok(stat_buffer, delim);
        unsigned char index = 0;
        static unsigned long long cpu_times[2][8];
        static unsigned char Init_fg = 0;
        if (Init_fg == 0)
        {
            Init_fg = 1;
            while (token != NULL)
            {
                if (USER <= index && index <= SOFTIRQ)
                {
                    cpu_times[1][index] = strtoull(token, NULL, 10);
                }
                token = strtok(NULL, delim);
                index++;
            }
        }
        else
        {
            for (int i = 0; i <= SOFTIRQ; i++)
            {
                cpu_times[0][i] = cpu_times[1][i];
            }

            while (token != NULL)
            {
                if (USER <= index && index <= SOFTIRQ)
                {
                    cpu_times[1][index] = strtoull(token, NULL, 10);
                }
                token = strtok(NULL, delim);
                index++;
            }
        }
        sleep(1);
        /*Calculation CPU Usage*/
        unsigned long long total[2] = {0};
        unsigned long long delta_total = 0;
        unsigned long long delta_idle = 0;

        for (int i = USER; i <= SOFTIRQ; i++)
        {
            total[0] += cpu_times[0][i];
            total[1] += cpu_times[1][i];
        }
        delta_total = total[1] - total[0];
        delta_idle = cpu_times[1][IDLE] - cpu_times[0][IDLE];
        double cpu_usage = (double)(delta_total - delta_idle) * 100 / delta_total;

        printf("%.2f%%\n", cpu_usage);
    }
    return NULL;
}
/*
 * Used = MemTotal - (MemFree + Buffers _ Cached)
 */
#define MemTotal 0
#define MemFree 1
#define Buffers 3
#define Cached 4
void* Memory_Usage(void* arg)
{
    while (!stop_flag)
    {
        FILE* meminfo = fopen("/proc/meminfo", "r");
        char mem_buffer[256];
        unsigned long long mem_arr[5];
        char* token;
        const char delim[] = " ";
        for (int i = 0; i <= Cached; i++)
        {
            fgets(mem_buffer, sizeof(mem_buffer), meminfo);
            token = strtok(mem_buffer, delim);
            token = strtok(NULL, delim);
            mem_arr[i] = strtoull(token, NULL, 10);
        }
        unsigned long long mem_used =
            mem_arr[MemTotal] - (mem_arr[MemFree] + mem_arr[Buffers] + mem_arr[Cached]);
        double mem_usage = ((double)mem_used * 100 / mem_arr[MemTotal]);
        printf("Memory Usage(%%) : %.2f%%\n", mem_usage);
        fclose(meminfo);
        sleep(1);
    }
    return NULL;
}
/*
 * number dir is pid of Process
 * In Folder, open stat file read process state, running time, memory used.
 * make List
 */
int is_Number(char* str)
{
    while (*str)
    {
        if (!isdigit(*str))
            return 0;
        str++;
    }
    return 1;
}

void* Process_List(void* arg)
{
    DIR* proc = opendir("/proc/");
    if (!proc)
    {
        perror("Failed Open /proc");
        return NULL;
    }
    struct dirent* entry;
    FILE* file;
    while ((entry = readdir(proc)) != NULL)
    {
        int i = 0;
        if (is_Number(entry->d_name))
        {
            char dir_stat[1024];
            strcpy(dir_stat, "/proc/");
            strcat(dir_stat, entry->d_name);
            strcat(dir_stat, "/stat");
            file = fopen(dir_stat, "r");
            if (file != NULL)
            {
                char stat_buffer[1024];
                if (fgets(stat_buffer, sizeof(stat_buffer), file))
                {
                    char* token = strtok(stat_buffer, " ");
                    char state = '\0';
                    unsigned long utime = 0, stime = 0;
                    long rss = 0;
                    int field_num = 1;
                    while (token != NULL)
                    {
                        if (field_num == 3)
                            state = token[0];
                        else if (field_num == 14)
                            utime = strtoull(token, NULL, 10);
                        else if (field_num == 15)
                            stime = strtoull(token, NULL, 10);
                        else if (field_num == 24)
                            rss = atol(token);
                        token = strtok(NULL, " ");
                        field_num++;
                    }
                    // printf("PID: %s, State: %c, utime: %lu, stime: %lu, RSS: %ld\n",
                    // entry->d_name,
                    //        state, utime, stime, rss);
                    long int page_size = sysconf(_SC_PAGE_SIZE);
                    long long memory_usage = rss * page_size;
                    long long memory_usage_kb = memory_usage / 1024;
                    long long memory_usage_mb = memory_usage_kb / 1024;
                    if (memory_usage != 0)
                    {
                        printf("PID : %s, Memory Usage : %llu\n", entry->d_name, memory_usage_mb);
                    }
                    //TODO
                    //Some process memory usage is too big
                    fclose(file);
                }
            }
        }
    }
    closedir(proc);
    return NULL;
}
/* Using ncurses library
 * Update terminal
 */
int main(void)
{
    signal(SIGINT, signal_handler);
    signal(SIGTERM, signal_handler);
    pthread_t cpu_thread, mem_thread, list_thread;
    pthread_create(&cpu_thread, NULL, CPU_Usage, NULL);
    pthread_create(&mem_thread, NULL, Memory_Usage, NULL);
    pthread_create(&list_thread, NULL, Process_List, NULL);
    pthread_join(cpu_thread, NULL);
    pthread_join(mem_thread, NULL);
    pthread_join(list_thread, NULL);
    return 0;
}
