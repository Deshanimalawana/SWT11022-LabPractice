#include <stdio.h>
int main() {
    // Declare three integer variables with any values
    int a = 40, b = 30, c = 50;

    // Find the largest number using comparison operators
    int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // Calculate the average of three numbers using arithmetic operators
    float average = (a + b + c) / 3.0;

    // Display the largest number using the ternary operator
    printf("The largest number is: %d\n", largest);

    // Print the result
    printf("The average of the three numbers is: %.2f\n", average);

    return 0;
}
