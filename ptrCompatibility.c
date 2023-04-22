#include <stdio.h>

int main() {

    /* Pointer Compatibility */

    int n = 5;
    double x;
    x = n;          // no error
    int* p1 = &n;
    double* pd = &x;
    //pd = p1;      // warning

    int* pt;
    int (*pa)[3];
    int ar1[2][3] = { 3, };
    int ar2[3][2] = { 7, };
    int** p2; // a pointer to a pointer 

    pt = &ar1[0][0]; //pointer-to-int
    pt = ar1[0];     //pointer-to-int
    //pt = ar1;      // Warning (Error)
    pa = ar1;        // pointer-to-int[3]

    
    return 0;
}