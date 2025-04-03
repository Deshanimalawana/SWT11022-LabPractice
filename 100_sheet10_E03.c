#include <stdio.h>

int main() {
    float marks[10]; // Declare an array to store 10 floating point numbers
    float max;       // Declare a variable to store the maximum value
    int i;

    // Prompt message for user input
    printf("Enter 10 student marks:\n");

    // Loop to get user input
    for (i = 0; i < 10; i++) {
        printf("Mark %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    // Assume first element is the maximum
    max = marks[0];

    // Loop to find the maximum value
    for (i = 1; i < 10; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
    }

    // Display the maximum value
    printf("The maximum mark is: %.2f\n", max);

    return 0;
}
