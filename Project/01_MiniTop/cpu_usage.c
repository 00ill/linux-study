#include "cpu_usage.h"
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
double cpu_usage = 0;
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
        cpu_usage = (double)(delta_total - delta_idle) * 100 / delta_total;

        // printf("%.2f%%\n", cpu_usage);
    }
    return NULL;
}

