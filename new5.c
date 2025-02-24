#include <stdio.h>

int main() {
    // Define length and width
    double length = 25.12428;
    double width = 12.59;

    // Calculate area
    double area = length * width;

    // Print the result with four decimal places
    printf("The area of the rectangle is: %.4f cm^2\n", area);

    return 0;
}
