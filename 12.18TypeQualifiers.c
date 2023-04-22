//
// Created by 김세영 on 2023/04/22.
//
#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
     * Qualified Types
     * const, volatile, restrict, _Atomic
     */

    /*
     * const
     */

    // C99 ideompotent(no matter use many times.)
    const const const int n = 6; // same as const int n =6

    typedef const int zip;
    zip q = 8; // const int ==> zip

    //const int i; //NOT initialized! const must initialized
    // i = 12; //Error
    //printf("%d\n", i); //Error

    float f1 = 3.14f, f2 = 1.2f;

    const float* pf1 = &f1;
//    *pf1 = f2 // Error
    pf1 = &f2; // Allowed

    float* const pf2 = &pf1;

    *pf2 = 6.0f; //Allowed
//    pf2 = &f1; // Error

    // if you want stuck indirection modify & pointer variable modify >> use const const

    const float* const f3 = &f1;
    //*f3 = 2.0f; //Error
    //f3 =  f2; //Error

    /*
     * volatile(휘발성)
     * - Do not optimize
     * - (ex: hardward clock)
     */

    // volatile variables can modfied different programs
    volatile int vi = 1; // volatile location
    volatile int* pvi = &vi; // points to a volatile location

    int i1 = vi;

    // ...

    int i2 = vi;

    /*
     * restrict(__restrict in VS)
     * - sole initial means of accessing a data object
     * - compiler can't check this restriction
     */

    int ar[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* par = ar;

    int* restrict restart = (int*) malloc(10 * sizeof(int)); // data use only restrict pointers
    if(!restart) exit(1);

    ar[0] += 3;
    par[0] += 5;

    restart[0] += 3;
    restart[0] += 5;



    return 0;
}