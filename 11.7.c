//
// Created by 김세영 on 2023/04/18.
//
#include <stdio.h>

void selection_sort(int* arr, int n);

int main() {

    int arr[10] = {23, 45, 33, 10, 203, 495, 2, 3, 91, 80};

    selection_sort(arr, 10);

    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void selection_sort(int* arr, int n) {

    for(int i = 0; i < n; ++i) {
        int min_idx = i;
        for (int j = i; j < n; ++j) {
            if(arr[min_idx] > arr[j]) {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}
