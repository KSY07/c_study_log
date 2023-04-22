//
// Created by 김세영 on 2023/04/22.
//
#include<stdio.h>


/*
 * InBlock Static Variable >> Static with No Linkage
 */

void count()
{
    int ct = 0;
    printf("count = %d %lld \n", ct ,(long long) &ct);
    ct++;

    // TODO: return &ct;
}

void static_count() {
    static int ct = 0;
    printf("static count = %d %lld\n", ct, (long long) &ct);
    ct++;

    // TODO: return &ct;
}

//int func(static int i) // Warining (Error in GCC) >> Because Call by Value, but static

// C11 give warning when handling static variable address.

int main() {

    count();
    count();
    static_count();
    static_count();
    count();

    return 0;
}