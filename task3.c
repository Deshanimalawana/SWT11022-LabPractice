#include <stdio.h>
int main(){
    float hoursWorked, payRate,totalSalary;

    printf("Enter worked hours:");
    scanf("%f", &hoursWorked);

    printf("Enter pay rate per hour");
    scanf("%f", &payRate);

    totalSalary = hoursWorked * payRate;

    printf("total salary: %.2f\n", totalSalary);
    return 0;
}
