#include <stdio.h>

#define ROWS 3
#define COLS 2

int main() {

    int matrix1[ROWS][COLS] = {{3,6}, {7,8}, {1,2}};
    int matrix2[ROWS][COLS] = {{1,9}, {6,4}, {3,5}};
    int result[ROWS][COLS];

    for(int i=0; i<ROWS; i++) {
        for(int j=0; j<COLS; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Result Matrix (Sum of Matrices):\n");
    printf("+-------+-------+\n");
    for(int i=0; i<ROWS; i++) {
        printf("| ");
        for(int j=0; j<COLS; j++) {
            printf("%5d | ", result[i][j]);
        }
        printf("\n+-------+-------+\n");
    }

    return 0;
}
