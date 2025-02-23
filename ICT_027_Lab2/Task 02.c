
#include <stdio.h>
#include <stdlib.h>

int main() {
    float hours, payrate, salary;

    printf("Enter total worked hours: ");
    scanf("%f", &hours);

    printf("Enter pay rate per hour: $");
    scanf("%f", &payrate);

    salary = hours * payrate;
 
    printf("\nTotal Salary: $%.2f\n", salary);

    return 0;
}