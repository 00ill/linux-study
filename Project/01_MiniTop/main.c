/*Main.c*/
#include "display.h"
#define TEST 1 
#if (TEST)
#include "cpu_usage.h"
#include "memory_usage.h"
#include "process_list.h"
#include <ctype.h>
#include <dirent.h>
#include <math.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#endif
#include <signal.h>
volatile sig_atomic_t stop_flag = 0;

void signal_handler(int sig)
{
    stop_flag = 1;
}
int main(void)
{
#if (TEST)
    signal(SIGINT, signal_handler);
    signal(SIGTERM, signal_handler);
    pthread_t cpu_thread, mem_thread, list_thread;
    pthread_create(&cpu_thread, NULL, CPU_Usage, NULL);
    pthread_create(&mem_thread, NULL, Memory_Usage, NULL);
    pthread_create(&list_thread, NULL, Process_List, NULL);
#endif
    // sleep(2);
    // Tutorial();
    pthread_join(cpu_thread, NULL);
    pthread_join(mem_thread, NULL);
    pthread_join(list_thread, NULL);
    return 0;
}
