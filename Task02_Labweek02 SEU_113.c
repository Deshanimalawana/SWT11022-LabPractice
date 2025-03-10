#include <stdio.h>

int main()
{
    float worked_hourse,pay_rate,total_salary;

    printf("Enter Total Worked Houres: ");
    scanf("%f",&worked_hourse);

    printf("Enter Pay Rates per Houres: ");
    scanf("%f",&pay_rate);

    total_salary = worked_hourse*pay_rate;

    printf("Total Salary: Rs.%.2f\n",total_salary);
    return 0;
}
