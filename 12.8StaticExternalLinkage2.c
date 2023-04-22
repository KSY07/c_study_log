//
// Created by 김세영 on 2023/04/22.
//
#include <stdio.h>

//extern int g_int = 200; // not error but, if initailize var in first file >> linking error

void temp() {
    extern int g_int; // Unable Initialize >> Cannot initailize extern variable in block scope
    g_int += 1000;
}

void fun_sec()
{
    temp();
    extern int g_int;
    g_int += 7;
    printf("g_int in fun_sec() %d %p", g_int, &g_int);
}