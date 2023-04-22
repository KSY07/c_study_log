//
// Created by 김세영 on 2023/04/20.
//
#include <stdio.h>

extern int el;

void testLinkage()
{
    printf("DoSomething called\n");
    printf("%d\n", el);

    el++;
}