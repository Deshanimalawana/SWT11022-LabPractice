#include <stdio.h>

int main() {
    // Variable declaration and initialization
    double length = 25.12428;  // Length of the rectangle
    double width = 12.59;      // Width of the rectangle
    double area;               // Variable to store the area

    // Calculating the area
    area = length * width;

    // Printing the output with four decimal places
    printf("Area of the rectangle: %.4f cm²\n", area);

    return 0;
}
