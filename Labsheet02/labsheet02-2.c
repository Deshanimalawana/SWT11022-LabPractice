#include <stdio.h>
int main (){
float payrate;
float working_hours;
float salary;
printf("What is your total work hour:");
scanf("%f",&working_hours);
printf("\n");
printf("What is your pay rate per hour:");
scanf("%f",&payrate);

salary = payrate * working_hours;

printf("Your total Salary is %.2f",salary);
}
