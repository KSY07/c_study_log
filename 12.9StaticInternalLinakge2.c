//
// Created by 김세영 on 2023/04/22.
//
#include<stdio.h>

extern int g_int;// referencing declaration

void fun_second(void) {
    g_int += 1;
    printf("g_int in fun_second() %d %p\n", g_int, &g_int);
}