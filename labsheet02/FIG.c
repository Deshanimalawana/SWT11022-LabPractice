#include <stdio.h>

int main() {
    // Given values
    double length = 25.12428, width = 12.59, area;

    // Calculating the area
    area = length * width;

    // Displaying the area with four decimal places
    printf("Area of the rectangle = %.4f cm²\n", area);

    return 0;
}
