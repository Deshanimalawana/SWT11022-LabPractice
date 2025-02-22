#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Declare variables
    double length = 25.12428, width = 12.59, area;

    // Calculate the area
    area = length * width;

    // Print the result with 4 decimal places
    printf("Area of the rectangle: %.4lf cm²\n", area);

    return 0;
}


