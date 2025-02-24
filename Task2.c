#include <stdio.h>
int main(){
float payRate;
int hours;
printf("Enter total workout hours: ");
scanf("%d", &hours);
printf("Enter pay rate: ");
scanf("%f", &payRate);
float tot_salary=payRate*hours;
printf("Your total salary is %.2f$", tot_salary);
return 0;
}
