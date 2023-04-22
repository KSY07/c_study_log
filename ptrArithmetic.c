//
// Created by 김세영 on 2023/03/15.
//

#include "stdio.h"

int main() {

    int* ptr = 0; // try double*, long long*, char*, void*

    // printf("%d", *ptr); //Error in this lecture

    printf("%p %lld\n", ptr, (long long) ptr);

    ptr += 1;

    printf("%p %lld\n", ptr, (long long) ptr);

    double arr[10];

    double* ptr1 = &arr[3], * ptr2 = &arr[5];

    int i = ptr2 - ptr1;

    printf("%lld %lld %d\n", (long long)ptr1, (long long)ptr2, i);

    return 0;
}