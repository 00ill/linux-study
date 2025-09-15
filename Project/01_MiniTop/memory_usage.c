#include "memory_usage.h"
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

