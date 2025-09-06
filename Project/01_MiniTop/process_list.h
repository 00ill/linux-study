#ifndef PROCESS_LIST_H
#define PROCESS_LIST_H
#define DATA_COUNT 100
typedef struct
{
    char pid[256];
    long long memory_usage;
} process_data_t;
extern process_data_t process_data[DATA_COUNT];
void* Process_List(void* arg);
#endif 

