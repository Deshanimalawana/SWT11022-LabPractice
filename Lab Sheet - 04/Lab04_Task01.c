#include <stdio.h>
int main ()
{
    int a = 12,b = 23,c =18;
    int large;

    large = (a>=b && a>=c) ? printf("a is a largest Number and the value is :- %d\n",a) :
        (b>=a && b>=c) ? printf("b is a largest Number and the value is :- %d\n",b) :
            printf("c is a largest Number and the value is :- %d\n",c);

    float average = (a + b + c) /3;

    printf("The Average of three number is :- %.f\n",average);

    return 0;
}
