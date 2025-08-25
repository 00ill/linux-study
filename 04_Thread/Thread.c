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

    pthread_create(&prod, NULL, producer, NULL);
    pthread_create(&cons, NULL, consumer, NULL);

    pthread_join(prod, NULL);
    pthread_join(cons, NULL);

    return 0;
}

