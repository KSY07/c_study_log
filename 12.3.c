//
// Created by 김세영 on 2023/04/20.
//

#include <stdio.h>

/**
 *
 * Varaible Scopes(Visibility)
 * - block, function, function prototype, file.
 *
 */

// file scope like global variable

int g_i = 123; //global variable
int g_j;

void func1() {
    g_i++;
}

void func2() {
    g_i += 2;
}


int main() {

    int local = 1234;

    func1();
    func2();

    printf("%d\n", g_i);
    printf("%d\n", g_j); // Not Initialized? // static variable save to BSS, initialize to 0
    printf("%d\n", local);


    return 0;
}