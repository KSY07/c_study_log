//
// Created by 김세영 on 2023/03/15.
//
#include <stdio.h>
#define MONTH 12

int main() {
//    /* Basic Usage */
//
//    int high[MONTH] = {2, 5,11, 18,23, 27, 29, 30, 26, 20, 12, 4};
//
//    for(int i = 0; i<MONTH; ++i) {
//        printf("%d ", high[i]);
//    }
//    printf("\n");
//
//    float avg = 0.0;
//    for(int i = 0; i<MONTH; ++i) {
//        avg += high[i];
//    }
//    printf("Average = %f\n", avg / (float) MONTH);
//
//    high[0] = 1;
//    high[1] = 2;
//
//    /* Address */
//    printf("%p %p\n", high, &high[0]);
//    for (int i = 0; i < MONTH; ++i) {
//        printf("%lld\n", (long long)&high[i]);
//    }
//
//    printf("\n");


    /* Partially Initialized */
//    int insuff[4] = { 2, 4 };
//    for (int i = 0; i < 4; ++i) {
//        printf("%d\n", insuff[i]);
//    }

    /* Omitting Size */
//    const int power_of_twos[] = { 1, 2, 4, 8, 16, 32, 64};
//    printf("%d\n", (int) sizeof(power_of_twos));
//    printf("%d\n", (int) sizeof(int));
//    printf("%d\n", (int) sizeof(power_of_twos[0]));
//
//    for(int i = 0; i < ((int) sizeof(power_of_twos) / (int) sizeof(power_of_twos[0])); ++i) {
//        printf("%d ", power_of_twos[i]);
//    }
//
//    return 0;

    /* Designated initializers */
//    int days[MONTH] = { 31, 28, [4] = 31, 30, 31, [1] = 29};
//    for (int i  = 0; i < MONTH; i ++)
//        printf("%d ", days[i]);

    /* Specifying Array sizes */
//    int arr1[MONTH];
//    double arr2[123];
//    float arr3[3*4 + 1];
//    float arr4[sizeof(int) + 1];
//    // float arr5[-10]; // no
//    // float arr6[0]; //no
//    // float arr7[1.5]; //no
//    float arr8[(int) 1.5];

    // int n = 8;
    // float arr9[n]; // Variable-Length Array is optional from c11

//    int n = 5;
//    float arr[n];
//
//    for(int i = 0; i < n; ++i)
//        arr[i] = (float) i;
//
//    for(int i = 0; i < n; ++i) {
//        printf("%f ", arr[i]);
//    }

    return 0;
}
