#include <stdio.h>

int main() {
    float hoursWorked, payRate, totalSalary;

    // Asking the user for input
    printf("Enter total worked hours: ");
    scanf("%f", &hoursWorked);

    printf("Enter pay rate per hour: ");
    scanf("%f", &payRate);

    // Calculating total salary
    totalSalary = hoursWorked * payRate;

    // Displaying the total salary
    printf("Total Salary: %.2f\n", totalSalary);

    return 0;
}
