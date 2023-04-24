//
// Created by 김세영 on 2023/04/24.
//
#include <stdio.h>
#include <string.h>
#define MAX_NAME 15

struct Patient {
    char name[MAX_NAME];
    float height;
    float weight;
    int age;
};

int main() {
    struct Patient p1, p2, p3; // structure Variables
    //struct Patient pat[100];
    strcpy(p1.name, "John Wick");
    p1.height = 180; // Dot(.)is structure member operator
    p1.weight = 90;

    strcpy(p2.name, "Dwayne Johnson");
    p2.height = 180;
    p2.weight = 120;

}