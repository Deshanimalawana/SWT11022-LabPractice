#include <stdio.h>

int main() {
    float hours;
    float pay_rate;


    printf("Enter total worked hours: ");
    scanf("%f", &hours);

    printf("Enter pay rate per hour: ");
    scanf ("%f", &pay_rate);

    float salary = hours*pay_rate;

    printf("Your salary is %.2f\n",salary);

    return 0;


}
