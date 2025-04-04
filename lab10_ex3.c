
#include <stdio.h>

int main() {
    // Declare an array to store 10 floating-point numbers
    float numbers[10];

    // Declare a variable to store the maximum value
    float max;

    // Get user input
    printf("Enter 10 floating-point numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }

    // Initialize max with the first element
    max = numbers[0];

    // Find the maximum value
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Display the maximum value
    printf("\nThe maximum value is: %.2f\n", max);

    return 0;
}
