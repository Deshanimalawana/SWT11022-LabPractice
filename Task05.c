#include <stdio.h>
int main ()
{
    float area,width,length;

    printf("input length-");
    scanf("%f",&length);
    printf("input width-");
    scanf("%f",&width);

    area=width*length;

    printf("Area of rectangle= %.4f",area);

    return 0;
}
