#include <stdio.h>

int main() {
    int A[3][2] = {{3, 6}, {7, 8}, {1, 2}};
    int B[3][2] = {{1, 9}, {6, 4}, {3, 5}};
    int sum[3][2];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Resultant Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
