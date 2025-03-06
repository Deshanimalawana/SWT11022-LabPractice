#include <stdio.h>

int main() {
    // a. Declare three integer variables a, b, and c with any values
    int a = 15, b = 10, c = 20;

    // b. Find the largest number among the three using comparison operators
    int largest = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    /
    printf("The largest number is: %d\n", largest);

    // d. Use arithmetic operators to calculate the average of three numbers and print the result
    float average = (a + b + c) / 3.0; // Use 3.0 to ensure floating-point division
    printf("The average of the three numbers is: %.2f\n", average);

    return 0;
}
