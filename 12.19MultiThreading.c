//
// Created by 김세영 on 2023/04/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <stdatomic.h>

_Atomic int acnt = 0; // atomic type qualifier(C11) >> _Atomic blocking use to many thread

void* myThreadFunc(void* vargp) {
    int n = 1; //thread storage duration
    for (int j = 0; j < 10; ++j) {
        sleep(1);
        acnt += n;
        printf("Printing from Thread %d %llu\n", acnt, (unsigned long long) &n);
    }

    return NULL;
}


int main() {

    pthread_t  thread_id1, thread_id2;

    printf("Before Thread\n");

    pthread_create(&thread_id1, NULL, myThreadFunc, NULL);
    pthread_create(&thread_id2, NULL, myThreadFunc, NULL);

    pthread_join(thread_id1, NULL); // main thread waiting for other thread works done.
    pthread_join(thread_id2, NULL);

    printf("After Thread\n");
    printf("Atomic %d\n", acnt);

    return 0;
}