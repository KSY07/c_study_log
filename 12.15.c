//
// Created by 김세영 on 2023/04/22.
//
#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
     * One Variable
     */

    int* ptr = NULL;

    ptr = (int*) malloc(sizeof(int));
    if(!ptr) exit(1);

    *ptr = 1024 * 3;
    printf("%d\n", *ptr);

    free(ptr);
    ptr = NULL;

    /*
     * 1D Array
     */

    int n = 3;
    ptr = (int*) malloc(n* sizeof(int));
    if (!ptr) exit(1);

    ptr[0] = 123;
    *(ptr + 1) = 456;
    *(ptr + 1) = 789;

    free(ptr);
    ptr = NULL;

    /*
     * 2D Array
     */
//    int row = 3, col = 2;
//    int(*ptr2d)[col] = (int(*)[2])malloc(sizeof(int) * row * col);
//    if (!ptr2d) exit(1);
//
//    for(int r = 0; r < row; r++)
//        for(int c = 0; c < col; c++)
    /**
     * Using 1D arrays as 2D arrays
     *
     * row = 3, col = 2
     *
     * (r,c)
     *
     * 2D
     * (0,0) (0,1)
     * (1,0) (1,1)
     * (2,0) (2,1)
     *
     * 1D
     * (0, 0) (0, 1) (1, 0) (1, 1) (2, 0) (2, 1)
     * 0       1      2      3      4      5      = c + col * r
     */

//    int row = 3, col = 2;
//    ptr = (int*)malloc(row * col * sizeof(int));
//    if (!ptr) exit(1);
//
//    for (int r = 0; r < row; r++) {
//        for(int c = 0; c < col; c++) {
//            ptr[c+col*r] = c + col * r;
//        }
//    }
//
//    for(int r=0; r < row; r++) {
//        for(int c=0; c<col; c++) {
//            printf("%d ", *(ptr + c + col * r));
//        }
//        printf("\n");
//    }
//
//    free(ptr);
//    ptr = NULL;

    /*
     * Using 1D Arrays as 3D Arrays
     *
     * row = 3, col = 2, depth = 2
     *
     * (r, c, d)
     *
     * 3D
     * -------------------------
     * (0, 0, 0) (0, 1, 0)
     * (1, 0, 0) (1, 1, 0)
     * (2, 0, 0) (2, 1, 0)
     * -------------------------
     * (0, 0, 1) (0, 1, 1)
     * (1, 0, 1) (1, 1, 1)
     * (2, 0, 1) (2, 1, 1)
     * -------------------------
     *
     * 1D
     * (0, 0, 0) (0, 1, 0) (1, 0, 0) (1, 1, 0) (2, 0, 0) (2, 1, 0) (0, 0, 1) (0, 1, 1)...
     *
     * = c + col * r + (col*row) * depth (From 2D (See 1D Arrays as 2D Arrays) depth by depth step (col*row)*d
     * ex) (col*row) * 0 = 0, (col*row) * 1 = 6, (col*row) * 2 = 12
     *
     */
    int row = 3, col =2, depth =2;
    ptr = (int*)malloc(row*col*depth*sizeof(int));

    for(int i = 0; i < row*col*depth; i++) {
        ptr[i] = i;
    }


    for(int d = 0; d < depth; d++) {
        printf("===========================\n");
        for (int r = 0; r < row; r++) {
            for (int c = 0; c < col; c++) {
                printf("%d ", *(ptr + c + col*r + (row*col*d)));
            }
            printf("\n");
        }
        printf("============================\n");
    }

    /*
     * 4D Arrays
     * row, col, depth, h
     * (r, c, d, h)
     * index = c + (col) * r + (col*row)*d + (row*col*depth)*h
     */

    return 0;
}