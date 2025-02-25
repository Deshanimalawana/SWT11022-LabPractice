#include <stdio.h>
int main(){
    float length,width,area;
    printf("enter the length=");
    scanf("%f",&length);

    printf("enter the width=");
    scanf("%f",&width);

    area=length*width;

    printf("area of the rectangle:%.4f",area);
    return 0;

}
