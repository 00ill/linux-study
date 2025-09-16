#include "display.h"
#include "process_list.h"
#include <signal.h>
#include <strings.h>
#include <unistd.h>
extern volatile sig_atomic_t stop_flag;

void Tutorial(void)
{
    initscr();
    while (stop_flag != 1)
    {
        clear();
        printw("CPU Usage : %.2f%%\n", cpu_usage);
        int index = 0;
        while (index <= 10)
        {
            printw("PID : %s, Memory Usage(MB) : %llu\n", process_data[index].pid,
                   process_data[index].memory_usage);
            index++;
        }
    refresh();
    sleep(2);
    }
    getch();
    endwin();
}
