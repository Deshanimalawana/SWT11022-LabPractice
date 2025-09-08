#include <stdio.h>

int main() {
    int num[10];
    int *ptr = num; // Pointer to the beginning of the array
    int sum = 0;
    //int i;

    // Get input from the user using pointer arithmetic
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", (ptr + i)); // Equivalent to &numbers[i]
    }

    // Calculate the sum using pointer arithmetic
    for (int i = 0; i < 10; i++) {
        sum += *(ptr + i); // Equivalent to numbers[i]
    }

    printf("Sum of 10 numbers = %d\n", sum);

    return 0;
}
