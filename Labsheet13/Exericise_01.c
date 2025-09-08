#include <stdio.h>

int main() {
    int arr[3][3] = {{34, 81, 96}, {72, 48, 24}, {80, 10, 71}};
    int (*ptr)[3] = arr; // Pointer to 2D array

    // Step 3: Print base address
    printf("Base address of array: %p\n\n", (void*)ptr);

    // Step 4: Print address of each row
    printf("Row addresses:\n");
    for(int i = 0; i < 3; i++) {
        printf("Row %d: %p\n", i, (void*)(ptr + i));
    }
    printf("\n");

    // Step 5: Print address of each element
    printf("Element addresses:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("arr[%d][%d]: %p\n", i, j, (void*)&ptr[i][j]);
        }
    }
    printf("\n");

    // Step 6: Print array elements
    printf("Array elements:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Step 7: Sum all elements
    int sum = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum += ptr[i][j];
        }
    }
    printf("Sum of all elements: %d\n", sum);

    return 0;
}
