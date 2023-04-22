//
// Created by 김세영 on 2023/04/22.
//
#include<stdio.h>

extern int g_int;

void fun_third(void) {
    g_int += 1;
    printf("g_int in fun_third() %d %p\n", g_int, &g_int);
}