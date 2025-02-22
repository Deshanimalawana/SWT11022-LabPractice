#include <stdio.h>

int main() {
    float hours, rate, salary;

    printf("Enter total worked hours: ");
    scanf("%f", &hours);

    printf("Enter pay rate per hour: ");
    scanf("%f", &rate);

    salary = hours * rate;
    printf("Total salary: %.2f\n", salary);

    return 0;
}