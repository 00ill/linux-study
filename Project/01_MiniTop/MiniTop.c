#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <signal.h>

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
#define system 3
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
        // Make Once Read File
        // else
        // Move Data
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

int main(void)
{
    signal(SIGINT, signal_handler);
    signal(SIGTERM, signal_handler);
    pthread_t cpu_thread;
    pthread_create(&cpu_thread, NULL, CPU_Usage, NULL);
    pthread_join(cpu_thread, NULL);
    return 0;
}
