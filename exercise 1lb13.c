#include <stdio.h>

int main() {
    // Step 1
    int array[3][3] = {
        {34, 81, 96},
        {72, 48, 24},
        {80, 10, 71}
    };

    // Step 2
    int (*ptr)[3] = array;

    // Step 3
    printf("Address of the 2D array: %p\n\n", (void*)ptr);

    // Step 4
    printf("Addresses of each row:\n");
    for (int i = 0; i < 3; i++) {
        printf("Row %d address: %p\n", i, (void*)(ptr + i));
    }
    printf("\n");

    // Step 5
    printf("Addresses of each element:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d] address: %p\n", i, j, (void*)&ptr[i][j]);
        }
    }

    return 0;
}
