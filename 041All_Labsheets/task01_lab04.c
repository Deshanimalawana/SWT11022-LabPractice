#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 2;
    int b = 10;
    int c = 52;
    int sum = a+b+c;
    float average =sum/3 ;

    int largeNo = (a>b) ? printf("a is the largest number :%d",a): (c>a) ? printf("c is the largest number :%d",c) : printf("b is the largest number :%d",b);
    printf("\nAverage is: %.2f",average);
    return 0;
}
