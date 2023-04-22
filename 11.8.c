//
// Created by 김세영 on 2023/04/18.
//
#include <stdio.h>
#include <string.h>

void swap(char** xp, char** yp);
void printStringArray(char* arr[], int size);
void selectionSort(char* arr[], int n);
int main() {

    char* arr[] = {"Cherry", "AppleBee", "Pineapple", "Apple", "Orange"};
    int n = sizeof(arr) / sizeof(arr[0]);

//    printf("%d\n", strcmp("Cherry", "AppleBee")); // result 1
    printStringArray(arr, n);
    selectionSort(arr, n);
    printStringArray(arr, n);

    return 0;
}

void printStringArray(char* arr[], int size) {
    for(int i = 0; i < size; i++) {
        puts(arr[i]);
    }
}

void swap(char** xp, char** yp) {
    char* temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(char* arr[], int n) {

    for(int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for(int j = i+1; j < n; j++) {
            if(strcmp(arr[min_idx], arr[j]) > 0) {
                min_idx = j;
            }
        }
        swap(&arr[i], &arr[min_idx]);
    }

}