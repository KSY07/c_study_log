//
// Created by 김세영 on 2023/04/22.
//
#include <stdio.h>
#include <stdlib.h>

int main() {

    /**
     * malloc() returns a void type pointer.
     * void* : generic pointer
     *
     * free() deallocates the memory
     */

//    double* ptr = NULL;
//
//    ptr = (double*)malloc(30 * sizeof(double));
//
//    if (ptr == NULL)
//    {
//        puts("Memory allocation failed");
//        /*
//         * exit(EXIT_FAILURE) is similar to return 1 IN main().
//         * exit(EXIT_SUCCESS) is similar to return 0 IN main().
//         */
//
//        exit(EXIT_FAILURE);
//    }
//
//    printf("Before free %p\n", ptr);
//
//    free(ptr);
//
//    printf("After free %p\n", ptr); // Address is enable, but, memory has deallocated
//
//    ptr = NULL; // optional >> better safety.

    /* Dynamic Allocated Array */
    int n = 5;
    double* ptr = (double*) malloc(n * sizeof(double));

    if(ptr != NULL) {
        for(int i = 0; i<n; i++)
        {
            printf("%f", ptr[i]);
        }
        printf("\n");

        for(int i = 0; i < n; ++i)
        {
            *(ptr+i) = (double) i ;
        }

        for(int i = 0; i < n; ++i)
        {
            printf("%f " , *(ptr+i));
        }
    }

    free(ptr);
    ptr = NULL;

    /*
     * Comparision to VLA
     *
     * VLA
     * - not supported by VS compilers.
     * - automatic duration, cannot be resized
     * - limited by stack size (when compiler places VLA in stack segment)
     */

    return 0; // return 1 >> Fail, return 0 >> Success
}