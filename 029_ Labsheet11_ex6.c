#include <stdio.h>

int main() {
    int matrix1[3][2] = {{3, 6}, {7, 8}, {1, 2}};
    int matrix2[3][2] = {{1, 9}, {6, 4}, {3, 5}};
    int resultarry[3][2];

    printf("Matrix 1:\n");
    for (int i = 0; i < 3; i++) {
        for (int C = 0; C < 2; C++) {
            resultarry[i][C] = matrix1[i][C] + matrix2[i][C];
            printf("%d\t", matrix1[i][C]);
        }
        printf("\n");
    }

    printf("\nMatrix 2:\n");
    for (int i = 0; i < 3; i++) {
        for (int C = 0; C < 2; C++) {
            printf("%d\t", matrix2[i][C]);
        }
        printf("\n");
    }
    printf("\nSum of Matrix 1 and Matrix 2:\n");
    for (int i = 0; i < 3; i++) {
        for (int C = 0; C < 2; C++) {
            printf("\t%d\t", resultarry[i][C]);
        }
        printf("\n");
    }
    return 0;
}
