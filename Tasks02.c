#include<stdio.h>
int main() {
    float hoursWorked, payRate, totalSalary;

    // Ask the user for the number of hours worked and pay rate per hour
    printf("Enter the total hours worked: ");
    scanf("%f", &hoursWorked);

    printf("Enter the pay rate per hour: ");
    scanf("%f", &payRate);

    // Calculate the total salary
    totalSalary = hoursWorked * payRate;

    // Display the total salary
    printf("Total salary = %.2f\n", totalSalary);

    return 0;
}
