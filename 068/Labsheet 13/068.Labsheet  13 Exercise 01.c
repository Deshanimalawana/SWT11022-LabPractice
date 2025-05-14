#include <stdio.h>
#include <stdlib.h>



int main() {
    int arr[3][3] = {
        {34, 81, 96},
        {72, 48, 24},
        {80, 10, 71}
    };
    int (*ptr)[3] = arr;

    // Step 3: Print address of array
    printf("Address of the array: %p\n", (void*)ptr);

    // Step 4: Print address of each row
    for (int i = 0; i < 3; i++) {
        printf("Address of row %d: %p\n", i, (void*)(ptr + i));
    }

    // Step 5 & 6: Print address and value of each element
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Address of arr[%d][%d]: %p | Value: %d\n", i, j,
                   (void*)&ptr[i][j], ((ptr + i) + j));
        }
    }

    // Step 7: Sum all elements using pointers
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += *(*(ptr + i) + j);

        }
    }
    printf("Sum of all elements: %d\n", sum);

    return 0;
}

