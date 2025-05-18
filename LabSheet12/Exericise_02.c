#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;
    int *ptr = numbers; // Pointer to first element of array

    // Get 10 numbers from user
    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", ptr + i); // Using pointer arithmetic
    }

    // Calculate sum using pointers
    for(int i = 0; i < 10; i++) {
        sum += *(ptr + i); // Dereferencing pointer
    }

    printf("Sum of the numbers: %d\n", sum);

    return 0;
}
