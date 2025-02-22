#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours;
    float payRate;
    printf("How many hours do you work : ");
    scanf("%d", &hours);
    printf("pay rate Hour : ");
    scanf("%f", &payRate);
    float salary = payRate * hours ;
    printf("your pay rate:%.2f, Worked Hours:%d\n", payRate,hours);
    printf("The total salary is :RS%.0f", salary);

    return 0;
}

