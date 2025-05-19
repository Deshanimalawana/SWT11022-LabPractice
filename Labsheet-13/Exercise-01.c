#include <stdio.h>

int main() {
    int arr[3][3] = {
        {34, 81, 96},
        {72, 48, 24},
        {80, 10, 71}
    };

    int (*ptr)[3] = arr;

    printf("Address of the array: %p\n", ptr);

    printf("\nAddress of each row:\n");
    for(int i = 0; i < 3; i++) {
        printf("Row %d: %p\n", i, ptr + i);
    }

    printf("\nAddress of each element:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("arr[%d][%d]: %p\n", i, j, *(ptr + i) + j);
        }
    }

    printf("\nArray elements:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    int sum = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum += *(*(ptr + i) + j);
        }
    }
    printf("\nSum of all elements: %d\n", sum);

    return 0;
}
