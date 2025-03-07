#include <stdio.h>

int main()
{
    int a= 5, b=10, c=15;

    int largest = (a>b && a>c) ? a : (b>a && b>c)? b:c;
    printf("the largest number is %d\n", largest);

    float average = (a+b+c)/3.0;
    printf ("The average of the three numbers is : %.2f\n", average);


    return 0;


}
