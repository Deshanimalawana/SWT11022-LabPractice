#include <stdio.h>

int main() {
    // Given length and width
    double length = 25.12428;
    double width = 12.59;
    double area;

    // Calculating the area
    area = length * width;

    // Displaying the area with four decimal places
    printf("The area of the rectangle is: %.4f cm²\n", area);

    return 0;
}
