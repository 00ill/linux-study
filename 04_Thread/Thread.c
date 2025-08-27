#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int head = 0; 
int tail = 0;  
int count = 0;

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond_produce = PTHREAD_COND_INITIALIZER;
pthread_cond_t cond_consume = PTHREAD_COND_INITIALIZER;

void* producer(void* arg) {
    for (int i = 0; i < 10; i++) {
        pthread_mutex_lock(&mutex);

        while (count == BUFFER_SIZE) {
            //버퍼가 가득 찼으면 cond_produce 시그널 대기
            pthread_cond_wait(&cond_produce, &mutex);
        }

        buffer[tail] = i;
        tail = (tail + 1) % BUFFER_SIZE;
        count++;

        printf("Produced: %d\n", i);

        pthread_cond_signal(&cond_consume);
        pthread_mutex_unlock(&mutex);

        sleep(1);
    }
    return NULL;
}

void* consumer(void* arg) {
    for (int i = 0; i < 10; i++) {
        pthread_mutex_lock(&mutex);

        while (count == 0) {
            //버퍼가 비어있으면 대기
            pthread_cond_wait(&cond_consume, &mutex);
        }

        int item = buffer[head];
        head = (head + 1) % BUFFER_SIZE;
        count--;

        printf("Consumed: %d\n", item);

        pthread_cond_signal(&cond_produce);
        pthread_mutex_unlock(&mutex);

        sleep(2);
    }
    return NULL;
}

int main() {
    pthread_t prod, cons;
    //스레드 생성
    //*thread, *attr, func(void*, void*), arg
    pthread_create(&prod, NULL, producer, NULL);
    pthread_create(&cons, NULL, consumer, NULL);
    
    //스레드 종료까지 대기
    //ID, 반환값을 받을 포인터, (void*)42같은 값을 받을 수 있음
    pthread_join(prod, NULL);
    pthread_join(cons, NULL);

    return 0;
}


