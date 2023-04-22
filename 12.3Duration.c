//
// Created by 김세영 on 2023/04/20.
//

/*
 * Storage Duration
 * - static storage duration
 * (Note: 'static' keyword indicates the linkage type, not the storage duration
 * - automatic storage duration // storage to stack memory
 * - allocated storage duration
 * - thread storage duration
 */
#include <stdio.h>

static int ct = 1; // file scope static

void count()
{
    int ct = 0;
    printf("count = %d\n", ct);
    ct++;
}

void static_count()
{
    static int ct = 0; // static variable >> static variables assinged memory from start to end of program // function scope static
    printf("static count = %d\n", ct);
    ct++;
}

int main() {

    count();
    count();
    static_count();
    static_count();
    ct = 2;
    printf("%d\n", ct);

    return 0;
}
