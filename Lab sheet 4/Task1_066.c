#include <stdio.h>

int main()
{
    int a=5,b=10,c=15;

    int largest_number = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);
    printf("The largest number is : %d",largest_number);

    float average = (a+b+c)/3;
    printf("\nThe average is : %0.2f",average);
    return 0;
}
