#include <stdio.h>

int main() {
    // Variable declaration
    float length = 25.12428; // Length of the rectangle
    float width = 12.59;     // Width of the rectangle
    float area;              // Variable to store the area

    // Calculate the area of the rectangle
    area = length * width;

    // Print the area with four decimal points
    printf("The area of the rectangle is: %.4f cm²\n", area);

    return 0;
}
