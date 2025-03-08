#include <stdio.h>

int main() {
    // Declare three integer variables
    int a, b, c;

    // Assign values to the variables (You can change these values)
    a = 40;
    b = 50;
    c = 45;

    // Find the largest number using comparison operators
    int largest = (a >= b && a >= c) * a + (b >= a && b >= c) * b + (c >= a && c >= b) * c;

    // Display the largest number using the ternary operator
    printf("The largest number is: ");
    printf("%d\n", (a >= b && a >= c) ? a : (b >= c) ? b : c);

    // Calculate and display the average using arithmetic operators
    float average = (a + b + c) / 3.0;  // Use 3.0 to ensure floating point division
    printf("The average of the three numbers is: %.2f\n", average);

    return 0;
}



