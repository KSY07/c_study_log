//
// Created by 김세영 on 2023/04/22.
//
#include <stdio.h>
void temp(register int r) {

}


int main()
{

    register int r;
    r=123;

    printf("%p\n", &r); // register cannot modify address
    int* ptr = &r;

    return 0;
}