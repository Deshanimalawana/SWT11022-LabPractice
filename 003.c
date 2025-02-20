#include <stdio.h>
int main(){

    float pay_rate;
    int hours;
    float salary;

    printf("Enter the worked hours : ");
    scanf("%d", &hours);
    printf("Enter pay rate : ");
    scanf("%f", &pay_rate);

    salary = hours * pay_rate;
    printf("Your salary is : %.2f\n", salary);
    return 0;
}
