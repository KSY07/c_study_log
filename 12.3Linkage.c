//
// Created by 김세영 on 2023/04/20.
//
#include <stdio.h>

int el;
static int li;

void testLinkage();

int main() {
    el = 1024;

    testLinkage();

    printf("%d\n", el);

    return 0;
}