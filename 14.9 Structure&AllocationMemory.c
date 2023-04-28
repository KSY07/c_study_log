//
// Created by 김세영 on 2023/04/26.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct namect {
    char* fname;  // Use malloc()
    char* lanme;  // Use malloc()
    int letters;
};

void getinfo(struct namect*);  // allocate memory
void makeinfo(struct namect*);

int main() {

    return 0;
}