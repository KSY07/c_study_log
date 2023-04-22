//
// Created by 김세영 on 2023/04/22.
//

#include<stdio.h>

static unsigned int seed = 0;

void my_srand(unsigned int k) {
    seed = k;
}

int my_rand(void) {
    seed = seed * 1103515245 + 1234;
    seed = (unsigned int) (seed/65536) % 32768;
    return (int)seed;
}
