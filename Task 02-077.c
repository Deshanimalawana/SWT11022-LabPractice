#include <stdio.h>
int main()

{
    float wh;
    float ph;
    float total;
    printf("Enter you total Worked Hours : ");
    scanf("%f",&wh);
    printf("Enter pay rate : ");
    scanf("%f",&ph);
    total = wh*ph;
    printf("\nTotal Salary : %.2f", total);
    return 0;
}
