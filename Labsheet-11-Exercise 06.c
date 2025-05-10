#include <stdio.h>

int main() {
    // Define the two matrices
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

    // Result matrix to store the sum
    int result[3][2];

    // Calculate the sum of the two matrices
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result matrix
    printf("Sum of the two matrices:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

