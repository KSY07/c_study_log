//
// Created by 김세영 on 2023/04/20.
//
#include <stdio.h>

/*
 * Automatic Storage class
 * - Automatic storage duration, block scope, no linkage
 * - Any variable declared in a block or function header
 */

void func(int k);

int main() {

    auto int a; // keyword auto : a storage-class specifier, in C++, auto is different
    //a = 1024;
    printf("%d\n", a); // what happens if uninitialized?, random initialized in MacOS Compiler...
    auto int b = a * 3; // what happens if uninitialized?


    int i = 1;
    int j = 2;

    printf("i %lld\n", (long long)&i);

    {

        int i =3; // name hiding
        printf("i %lld\n", (long long)&i);

        int ii = 123;
        // j is visible here
        printf("j = %d\n", j);

    }

    // ii not visible here

    printf("i %lld\n", (long long)&i); // no block?
    char str[100];
    sprintf(str, "Hello%d", 10);
    puts(str);

    return 0;
}