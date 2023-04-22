#include <stdio.h>

int main() {

    int a = 7;

    int* ptr = &a;

    *ptr = 8; //Dereferencing, Indirection

    int **pptr = &ptr;

    **pptr = 9; // Double Indirection

    return 0;

}