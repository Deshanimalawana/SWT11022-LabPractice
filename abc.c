#include <stdio.h>
int main(){
    float hoursWorKed,payRate, totalSalary;
    printf("Enter the total hours worked:");
    scanf("%f",&hoursWorKed);
    printf("Enter the pay rate per hour:");
    scanf("%f",&payRate);
    totalSalary = hoursWorKed * payRate ;
    printf("Total salary =%.2f\n", totalSalary);
    return 0;
}
