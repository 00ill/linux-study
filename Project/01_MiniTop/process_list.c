#include "process_list.h"
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

extern volatile sig_atomic_t stop_flag;
process_data_t process_data[DATA_COUNT] = {{0, 0}};

static int is_Number(char* str)
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
    int i = 0;
    while ((entry = readdir(proc)) != NULL)
    {
        if (i > 99)
        {
            i = 99;
        }
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
                    // // printf("PID: %s, State: %c, utime: %lu, stime: %lu, RSS: %ld\n",
                    // entry->d_name,
                    //        state, utime, stime, rss);
                    long int page_size = sysconf(_SC_PAGE_SIZE);
                    long long memory_usage = rss * page_size;
                    long long memory_usage_kb = memory_usage / 1024;
                    long long memory_usage_mb = memory_usage_kb / 1024;
                    if (memory_usage != 0)
                    {
                        // printf("PID : %s, Memory Usage : %llu\n", entry->d_name,
                        // memory_usage_mb);
                        // memcpy(process_data[i].pid, entry->d_name, 256);

                        strncpy(process_data[i].pid, entry->d_name,
                                sizeof(process_data[i].pid) - 1);
                        process_data[i].pid[sizeof(process_data[i].pid) - 1] = '\0';
                        process_data[i].memory_usage = memory_usage_mb;
                    }
                    i++;
                    // TODO
                    // Some process memory usage is too big
                    fclose(file);
                }
            }
        }
    }
    closedir(proc);
    return NULL;
}
