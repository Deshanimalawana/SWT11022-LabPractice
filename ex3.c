#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours;
    float payRate;
    printf("How many hours do yo work: ");
    scanf("%d",&hours);
    printf("pay rate hours: ");
    scanf("%f", &payRate);
    float salary=payRate*hours;
    printf("your pay rate:%.2f, Worked Hours:%d\n",payRate,hours);
    printf("The total salary is :RS%.0f",salary);
    return 0;
}
