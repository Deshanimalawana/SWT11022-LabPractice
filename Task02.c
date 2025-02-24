#include <stdio.h>

int main(){

   float pay_rate, work_hours;

   printf("Enter Pay rate per Hour : ");
   scanf("%f", &pay_rate);
   printf("Enter Work Hours : ");
   scanf("%f", &work_hours);

   float salary = pay_rate * work_hours;
   printf("Salary = %.2f", salary);

}