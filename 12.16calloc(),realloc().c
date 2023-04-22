//
// Created by 김세영 on 2023/04/22.
//
#include <stdio.h>
#include <stdlib.h>

int main() {

    int n = 10;
    int* ptr = NULL;

    ptr = (int*) calloc(n, sizeof(int)); // Contiguous allocation (count, size) ### malloc(size)

    /** !important : calloc() do initialize */
    if (!ptr) exit(1);

    for (int i = 0; i < n; ++i) {
        printf("%d ", ptr[i]);
    }
    printf("\n");


    /*
     * realloc() KNK p. 422
     * - doesn't initialize the bytes added
     * - returns NULL if can't enlarge the memory block
     * - If first argument is NULL, it behave like malloc()
     * - if second argument is 0, it frees the memory block.
     */

    for (int i = 0; i < n; i++)
        ptr[i] = i + 1;

    n = 20; // memory enlarged

    int* ptr2 = NULL;
    ptr2 = (int*) realloc(ptr, n * sizeof(int)); // deallocated ptr memory & reallocated enlarged memory to ptr2
//    ptr = (int*) realloc(ptr, n * sizeof(int)); // enable realloc same pointer

    printf("%p %p\n", ptr, ptr2);


    return 0;

}