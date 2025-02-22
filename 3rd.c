#include <stdio.h>
int main (){
float pay_rate;
int hours;
printf("Enter the work hours");
scanf("%d",&hours);
printf("Enter pay_rate");
scanf ("%f",&pay_rate);

printf ("Your Pay Rate : %.2f, Work Hours: %d\n",pay_rate,hours);
float salary = hours*pay_rate;
printf("Your salary : %.2f",salary);
return 0;
}