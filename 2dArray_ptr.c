#include<stdio.h>

int main() {

    // int arr0[3] = {1,2,3};
    // int arr1[3] = {4,5,6};

    // int* parr[2] = {arr0, arr1};

    // for(int j = 0; j<2; ++j)
    // {
    //     for (int i = 0; i < 3; ++i)
    //         printf("%d(==%d, %d) ", parr[j][i], *(parr[j] + i), *(*(parr +j) + i));
    //     printf("\n");
    // }

    // printf("\n");

    // int arr[2][3] = { {1,2,3}, {4,5,6} };

    // int* parr[2];
    // parr[0] = arr[0];
    // parr[1] = arr[1];    

    ///*
    //  Notes
    //  - parr[0] and parr[1] do not point valid memory by default
    //  - &parr[0] != &arr[0]
    //  = &parr[0] != parr[0] but &arr[0] == arr[0]
    //
    //*/

    // printf("%p\n", &parr[0]); // different (address by pointer)
    // printf("%p\n", parr[0]);
    // printf("%p\n", arr);
    // printf("%p\n", &arr[0]);
    // printf("%p\n", arr[0]);
    // printf("%p\n", &arr[0][0]);

    /* Array of string of diverse lengths example */

    // char* name[] = {"Aladdin", "Jasmine", "Magic Carpet", "Genie"};

    // const int n = sizeof(name) / sizeof(char*);

    // for(int i = 0; i < n; ++i)
    //     printf("%s at %llu\n", name[i], (unsigned long long)name[i]); // memory distance unstable;
    // printf("\n");

    // char aname[][15] = {"Aladdin", "Jasmine", "Magic Carper", "Genie", "Jarfar"};

    // const int an = sizeof(aname) / sizeof(char[15]);

    // for (int i = 0; i < an; ++i)
    //     printf("%s at %llu\n", aname[i], (unsigned long long)& aname[i]); // memory distance of 15 exactly
    
    // printf("\n");

    /* Difference of Array & Pointer Array */
    
    float arr2d[2][4] = { {1.0f, 2.0f, 3.0f, 4.0f}, {5.0f, 6.0f, 7.0f, 8.0f} };

    printf("%llu\n", (unsigned long long) arr2d);
    printf("%llu\n", (unsigned long long) arr2d[0]);
    printf("\n");

    // arr2d points to arr2d[0] (not arr2d[0][0]), KNK Ch. 12.4

    printf("%llu\n", (unsigned long long)* arr2d);
    printf("%llu\n", (unsigned long long)& arr2d[0]); // C language allows this
    printf("%llu\n", (unsigned long long)& arr2d[0][0]);
    printf("%f %f\n", arr2d[0][0], **arr2d);
    printf("\n");

    printf("%llu\n", (unsigned long long)(arr2d +1));
    printf("%llu\n", (unsigned long long)(&arr2d[1]));
    printf("%llu\n", (unsigned long long)(arr2d[1]));
    printf("%llu\n", (unsigned long long)(*(arr2d +1)));
    printf("%llu\n", (unsigned long long)(&arr2d[0] + 1));
    printf("%llu\n", (unsigned long long)(&arr2d[1][0]));
    printf("\n");

    return 0;
}