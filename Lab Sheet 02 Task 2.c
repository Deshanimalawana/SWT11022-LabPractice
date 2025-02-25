#include <stdio.h>

int main() {
    float workedHours, payRate, totalSalary;
    printf("Enter total worked hours: ");
    scanf("%f", &workedHours);
    printf("Enter pay rate per hour: ");
    scanf("%f", &payRate);
    totalSalary = workedHours * payRate;
    printf("Total Salary: %.2f\n", totalSalary);
    return 0;
}
