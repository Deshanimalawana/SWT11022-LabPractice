#include <stdio.h>

int main()
{

    float hoursWorked,payRate,totalSalary;

    printf("Enter total hours worked");
    scanf("%f",&hoursWorked);
    printf("Enter pay rate per hour");
    scanf("%f",&payRate);

    totalSalary= hoursWorked*payRate;
    printf("Total Salary:%.2f\n",totalSalary);

    return 0;

}
