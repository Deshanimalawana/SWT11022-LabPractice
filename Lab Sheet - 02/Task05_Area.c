#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length=25.12428;
    float width=12.59;
    float area;

    area=length * width;

    printf("The Length of the Rectangle is:%f cm\n",length);
    printf("The width of the Rectangle is:%.2f cm\n\n",width);
    printf("The Total-Area of a Rectangle is:%.4f cm^2\n",area);
    return 0;
}
