#include <stdio.h>
int main() {
    float work_hours, pay_rate_per_hour, salary;
    printf("Enter work hours: ");
    scanf("%f", &work_hours);
    printf("Enter pay rate per hour: ");
    scanf("%f", &pay_rate_per_hour);
    salary = work_hours * pay_rate_per_hour;
    printf("Salary = %f", salary);
    return 0;
}
