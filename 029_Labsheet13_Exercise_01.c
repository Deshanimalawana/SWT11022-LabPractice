#include <stdio.h>

int main() {
    int array2D[3][3] = {
        {34, 81, 96},
        {72, 48, 24},
        {80, 10, 71}
    };
    int r = 3,c = 3;

    int (*ptr2D)[c] = array2D;

    printf("Address of the 2D array : %p\n\n", (void *)ptr2D);

    for (int i = 0; i < r; i++) {
        printf("Row %d : %p\n", i, (void *)(ptr2D + i));
        //printf("Row %d address : %p\n", i, (void *)&array2D[i]);
    }
    printf("\n\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Address of array[%d][%d]: %p\n", i, j, (void *)(*(ptr2D + i) + j));
            //printf("Address of array[%d][%d] : %p\n\n", i, j, (void *)&array2D[i][j]);
        }
    }
    printf("\n\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("array[%d][%d]: %d\n", i, j, *(*(ptr2D + i) + j));
        }
        printf("\n");
    }

    int sum = 0;
    int *elementPtr;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            elementPtr = &array2D[i][j];
            sum += *elementPtr;
        }
    }
    printf("\nSum of all elements : %d\n", sum);


    return 0;
}
