#include<stdio.h>
int main(){
float hoursworked, payrate, totalsalary;

printf("enter worked hours:");
scanf("%f", &hoursworked);

printf("enter pay rate per hour");
scanf("%f", &payrate);

totalsalary = hoursworked * payrate;
printf("total salary: %.2f\n", totalsalary);
return 0;
}
