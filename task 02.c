#include <stdio.h>

int main() {
    float hoursWorked, payRate, salary;


    printf("Enter total worked hours: ");
    scanf("%f", &hoursWorked);

    printf("Enter pay rate per hour: ");
    scanf("%f", &payRate);


    salary = hoursWorked * payRate;


    printf("Your total salary is: %.2f\n", salary);

    return 0;
}
