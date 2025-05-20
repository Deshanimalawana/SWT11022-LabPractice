#include <stdio.h>

int main() {
    int arr[3][3] = {
        {34, 81, 96},
        {72, 48, 24},
        {80, 10, 71}
    };

    int *ptr = &arr[0][0];

    printf("address of the array: %p\n", ptr);

    for (int i = 0; i < 3; i++) {
        printf("Address of row %d: %p\n", i, arr[i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Address of arr[%d][%d]: %p\n", i, j, &arr[i][j]);
        }
    }
    printf("\n");

    printf("Elements of the array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
    printf("\n");

    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += *(*(arr + i) + j);
        }
    }
    printf("Sum of all elements: %d\n", sum);

    return 0;
}
