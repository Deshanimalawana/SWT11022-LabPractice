#include <stdio.h>
int main (){
    float length ;
    float width ;

    printf ("Length of the rectangle: ");
    scanf ("%f", &length);

    printf("Width of the rectangle:");
    scanf ("%f", &width);

    float Area = length*width;

    printf("Area of the rectangle: %.4f\n", Area);
    return 0;

}
