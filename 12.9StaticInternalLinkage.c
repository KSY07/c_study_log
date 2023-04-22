//
// Created by 김세영 on 2023/04/22.
//
#include <stdio.h>
/**
 * Static variable with internal linkage
 * - File Scope, External linkage, static storage duration
 * - Internal Storage Class
 **/

int g_int = 123; //defining declaration
// if added prefix static >> external -> internal

void fun();
void fun_second();
void fun_third();

int main() {

    fun();
    fun_second();
    fun_third();

    return 0;
}

void fun()
{
    extern int g_int;

    g_int += 1;
    printf("g_int in fun() %d %p\n", g_int, &g_int);
}