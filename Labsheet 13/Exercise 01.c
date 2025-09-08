#include <stdio.h>

int main() {
    int arr[3][3] = {
        {34, 81, 96},
        {72, 48, 24},
        {80, 10, 71}
    };

    int *ptr = &arr[0][0];

    // Step 3: Print address of the array
    printf("Base address of array: %p\n\n", ptr);

    // Step 4: Print address of each row
    for (int i = 0; i < 3; i++) {
        printf("Address of row %d: %p\n", i, arr[i]);
    }

    printf("\n");

    // Step 5: Print address of each element using pointers
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Address of arr[%d][%d]: %p\n", i, j, &arr[i][j]);
        }
    }

    printf("\n");

    // Step 6: Print elements using pointer dereferencing
    printf("Elements of array using pointer:\n");
    for (int i = 0; i < 9; i++) {
        printf("%d ", *(ptr + i));
    }

    printf("\n\n");

    // Step 7: Sum all elements using pointer
    int sum = 0;
    for (int i = 0; i < 9; i++) {
        sum += *(ptr + i);
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}
