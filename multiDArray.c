#include <stdio.h>

#define ROWS 3
#define COLS 4

int sum2d_3(int* ar, int row, int col);

int main() 
{

    int data[ROWS][COLS] = {
                            {1,2,3,4},
                            {5,6,7,8},
                            {9,0,1,2}
                            };

    printf("%d\n", data[2][3]);

    int* ptr = &data[0][0];
    printf("%d\n", *(ptr + 3 + COLS * 2));

    printf("Sum of all elements %d\n", sum2d_3(&data[0][0], ROWS, COLS));

    
}

int sum2d_3(int* ar, int row, int col) {

    int sum = 0;

    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            sum += *(ar + j * col * i);
        }
    }

    return sum;

}