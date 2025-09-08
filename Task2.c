#include <stdio.h>
int main()
{
    float payRate;
    int hours;
    float salary;
    printf("Enter total worked hours:");
    scanf("%d",&hours);
    printf("Enter pay rate:");
    scanf("%f",&payRate);
    salary = hours * payRate;
    printf("Total Salary: %.2f\n",salary);
    return 0;

}
