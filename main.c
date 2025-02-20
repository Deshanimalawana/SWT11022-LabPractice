#include <stdio.h>
#include <stdlib.h>

int main()
{
    float payRate;
    int hours;
    printf("Enter total worked hours:");
    scanf("%d",&hours);
    printf("Enter pay rate: ");
    scanf("%f",&payRate);
    printf("Your Pay Rate: %.2f, Worked Hours: %d\n",  payRate, hours);
    return 0;
}
