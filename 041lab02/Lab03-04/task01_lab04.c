#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    int a=10;
    int b=1000;
    int c=20000;
    //ternary operator
    int grader = (a>b)? ((a>c)? a : c) :((b>c)? b:c);
    printf("The largest no is: %d", grader);
    int total = a+b+c;
    float avg = total/3;
    printf("the average is:%.2f",avg);
    return 0;
}
