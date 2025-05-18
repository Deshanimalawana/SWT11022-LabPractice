#include <stdio.h>

int main() {
    int numbers[10];
    int *ptr = numbers; // Pointer to the array
    int sum = 0;

    // Get 10 integers from the user
    printf("Enter 10 integer numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", ptr + i); // Storing input directly using the pointer
    }

    // Calculate the sum using the pointer
    for (int i = 0; i < 10; i++) {
        sum += *(ptr + i); // Accessing values using pointer arithmetic
    }

    // Display the sum
    printf("\nThe sum of the 10 numbers is: %d\n", sum);

    return 0;
}
