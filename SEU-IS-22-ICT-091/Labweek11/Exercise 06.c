#include <stdio.h>

int main() {
    int matr1[3][2] = {{3, 6}, {7, 8}, {1, 2}};
    int matr2[3][2] = {{1, 9}, {6, 4}, {3, 5}};
    int result[3][2];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matr1[i][j] + matr2[i][j];
        }
    }

    printf("Sum of the two matrices (3x2):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
