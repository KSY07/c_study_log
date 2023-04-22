#include <stdio.h>

double getAverage(double* arr, int size) {

    double avg = (double) 0;

    for(int i = 0; i < size; ++i) 
    {
        avg += arr[i];
    }

    avg /= (double) size;

    return avg;

}

int main() {

    double arr1[5] = {10,13,12,7,8};
    double arr2[5] = {1.8, -0.2, 6.3, 13.9, 20.5};

    printf("Address = %p\n", arr1);
    printf("Size = %zd\n", sizeof(arr1));

    printf("%f\n", getAverage(arr1, 5));
    printf("%f\n", getAverage(arr2, 5));

    return 0;
}