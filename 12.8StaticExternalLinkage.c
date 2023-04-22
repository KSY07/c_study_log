//
// Created by 김세영 on 2023/04/22.
//
#include <stdio.h>

/**
 * Static External Linkage
 *
 **/
/*
 * Static variable with external linkage
 * - File scope, external linkage, static storage duration
 * - External storage class
 * - External variables
 */

int g_int = 0;
double g_arr[1000] = {0.0, };

/**
 * Initalizing External Variables
 **/

int x = 5;
int y = 1 + 2;
size_t z = sizeof(int);
//int x2 = 2 * x; // not ok, x is a variable

void func() {
    printf("g_int in func() %d %p\n", g_int, &g_int);
    g_int += 10;
}

void fun_sec();

int main() {

    /**
     * defining declaration vs referencing declaration
     **/

    extern int g_int; //referencing declaration // Optional (TODO: Find to out of scope g_int variable)

//    int g_int = 123; // Redefinition Error

    extern double g_arr[];  // optional, size is not necessary

    printf("g_int in main() %d %p\n", g_int, &g_int);
    g_int += 1;

    func();
    fun_sec();

    return 0;
}