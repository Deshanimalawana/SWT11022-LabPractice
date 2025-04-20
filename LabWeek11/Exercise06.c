#include <stdio.h>

int main() {
    int rows = 3, cols = 2;
    int matrix1[3][2] = {
        {3, 6},
        {7, 8},
        {1, 2}
    };

    int matrix2[3][2] = {
        {1, 9},
        {6, 4},
        {3, 5}
    };

    int result[3][2];

    // Calculate sum of the two matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display result matrix
    printf("Result matrix (Sum of matrix1 and matrix2):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
