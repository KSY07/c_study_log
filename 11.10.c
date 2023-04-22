//
// Created by 김세영 on 2023/04/18.
//
#include <stdio.h>

int main(int argc, char* argv[]) {
    int count;

    printf("The command line has %d arguments:\n", argc);

    for(count = 0; count < argc; count++) {
        printf("Arg %d : %s\n", count, argv[count]);
    }
    printf("\n");

    return 0;
}