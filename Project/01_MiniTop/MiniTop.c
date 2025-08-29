#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
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

void CPU_Usage(void)
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
    unsigned long long cpu_times[7];
 
    while (token != NULL)
    {
        if(USER <= index && index <= SOFTIRQ)
        {
            cpu_times[index] = strtoull(token, NULL, 10);
            printf("%llu\n", cpu_times[index]);
        }
        token = strtok(NULL, delim);
        index++;
    }
}

int main(void)
{
    CPU_Usage();
    return 0;
}
