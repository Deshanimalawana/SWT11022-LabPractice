#include <stdio.h>

int main() {
    float payrate;
    float hours;
    float totalsalary;

    printf("Enter pay rate: ");
    scanf("%f", &payrate);

    printf("Enter hours: ");
    scanf("%f", &hours);

    totalsalary = hours * payrate;
    printf("Total salary: %.2f\n", totalsalary);

    return 0;
}
