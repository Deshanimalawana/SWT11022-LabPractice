#include <stdio.h>

int main () {

    int matrix [3][3] = {{34,81,96},{72,48,24},{80,10,71}};
    int sum = 0;

    int (*point)[3] = matrix;

    printf("Address of the Array = %p\n", point);
    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("|");
        for (int j = 0; j < 3; j ++) {
            printf("%p | ",(*(point + i) + j));
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("|");
        for (int j = 0; j < 3; j ++) {
            printf("%d | ",*(*(point + i) + j));
            sum += *(*(point + i) + j);
        }
        printf("\n");
    }
    printf("\n");
    printf("\nThe Sum of the Matrix is = %d\n",sum);
    return 0;
}
