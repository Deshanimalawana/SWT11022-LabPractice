#include <stdio.h>

int main() {
    int array[3][3] = {
        {34, 81, 96},
        {72, 48, 24},
        {80, 10, 71}
    };

    int (*ptr)[3] = array;

    printf("Address of array: %p\n", ptr);

    for (int i = 0; i < 3; i++) {
        printf("Address of row %d: %p\n", i, ptr + i);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Address of element [%d][%d]: %p\n", i, j, &ptr[i][j]);
        }
    }

    printf("Elements of the array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", ((ptr + i) + j));
        }
        printf("\n");
    }


    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += * (*(ptr + i) + j);
        }
    }
    printf("Sum of all elements: %d\n", sum);

    return 0;
}
