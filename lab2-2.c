#include <stdio.h>

int main() {

    float pay_rate, salary;
    int hours;

    // Taking input for worked hours
    printf("Enter total worked hours: ");
    scanf("%d", &hours);

    // Taking input for pay rate
    printf("Enter pay rate: ");
    scanf("%f", &pay_rate);

    // Calculating salary
    salary = hours * pay_rate;

    // Displaying the result
    printf("Total Salary: %.2f\n", salary);

    return 0;
}
