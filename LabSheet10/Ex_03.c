#include <stdio.h>

int main() {
    // Declare an array to store 10 floating point numbers
    float numbers[10];

    // Declare a variable to store maximum value
    float max;

    // Print instructions for the user
    printf("Enter 10 floating-point numbers:\n");

    // Using a loop get the user input
    for(int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%f", &numbers[i]);
    }

    // Initialize max with first element
    max = numbers[0];

    // Implement a loop to find the maximum value
    for(int i = 1; i < 10; i++) {
        if(numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Display the maximum value
    printf("\nThe maximum value is: %.2f\n", max);

    return 0;
}
