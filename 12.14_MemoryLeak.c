//
// Created by 김세영 on 2023/04/22.
//
#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("Dummy Output\n");
    int* ptr_backup = NULL;
//    for(int k = 0; k < 10000000; ++k)
    {
        int n = 100000000;
        int* ptr = (int*)malloc(n * sizeof(int));

        if(!ptr) // if(ptr == NULL)
        {
            printf("Malloc() failed\n");
            exit(1);
        }

        for(int i = 0; i < n; ++i)
        {
            ptr[i] = i + 1;
        }
        printf("%d %d\n", ptr[0], ptr[1]);
        ptr_backup = ptr;
        //What Happens?
        //free(ptr);
        //ptr = NULL;
    }
    printf("%d %d\n", ptr_backup[0], ptr_backup[1]);
    printf("Dummy Output\n"); // After Scope, ptr has gone, but heap memory was still allocated


    return 0;
}