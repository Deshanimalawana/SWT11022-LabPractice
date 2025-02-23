#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours;
    float payrate;
    printf("How many hours did you work:");
    scanf("%d", &hours);
    printf("Enter pay rate :");
    scanf("%f" , & payrate);
    float salary = hours * payrate ;
    printf("Your salary is :Rs%.2f\n", salary);
    return 0;

}
