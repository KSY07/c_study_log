#include <stdio.h>

int main() {

    int arr[2][3] = {{1,2,3}, {4,5,6}};
    int rowSize = sizeof(arr[0]) / sizeof(arr[0][0]);
    int colSize = sizeof(arr) / sizeof(int) / rowSize;

    printf("%d %d %d\n", rowSize, colSize, sizeof(arr[0]));

    for(int i = 0; i < colSize; ++i) {
        for(int j = 0; j<rowSize; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    };

    int arr3d[2][3][4] = {
                            {
                                {1,2,3,4},
                                {5,6,7,8},
                                {9,10,11,12}
                            },
                            {
                                {13,14,15,16},
                                {17,18,19,20},
                                {21,22,23,24}
                            }
                        };

    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 3; ++j) {
            for(int k = 0; k < 4; ++k) {
                printf("%d ", arr3d[i][j][k]);   
            }

            printf("\n");
        }

        printf("\n\n");
    }

    return 0;
}