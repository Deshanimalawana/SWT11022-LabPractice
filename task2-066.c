#include <stdio.h>
int main ()
{
    float wh;
    float ts;
    float pr;

    printf("Enter your total worked hours :");
    scanf("%f",&wh);
    printf("Enter pay rate per hour :");
    scanf("%f",&pr);
    ts=wh*pr;
    printf("Total Worked Hours : %0.2f\nPay Rate : %0.2f\nTotal Salary : %0.2f", wh, pr, ts);

    return 0;
}
