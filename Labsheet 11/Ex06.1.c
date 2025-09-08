#include <stdio.h>

#define ROWS 3
#define COLS 2

void printMatrix(int matrix[ROWS][COLS], char* name);

int main() {

    int matrix1[ROWS][COLS] = {
        {3, 6},
        {7, 8},
        {1, 2}
    };

    int matrix2[ROWS][COLS] = {
        {1, 9},
        {6, 4},
        {3, 5}
    };

    int result[ROWS][COLS];


    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printMatrix(matrix1, "Matrix 1");
    printMatrix(matrix2, "Matrix 2");
    printMatrix(result, "Sum of Matrices");

    return 0;
}


void printMatrix(int matrix[ROWS][COLS], char* name) {
    printf("\n%s:\n", name);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}
