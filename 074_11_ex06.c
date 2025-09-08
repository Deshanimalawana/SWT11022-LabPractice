#include <stdio.h>

int main() {
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

    // Calculating the sum of both matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Displaying the result
    printf("Resultant Matrix (Sum of Matrix1 and Matrix2):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
