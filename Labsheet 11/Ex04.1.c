#include <stdio.h>

#define SIZE 10  // Constant for array size

int main() {
    int numbers[SIZE];  // Array to store 10 integers

    printf("Enter 10 integer values:\n");

    // Get input from user
    for (int i = 0; i < SIZE; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display the array
    printf("\nThe array contains:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}
