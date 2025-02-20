#include<stdio.h>
int main(){

float payrate;
int workinghours;

printf("Enter the working hours:");
scanf("%d",&workinghours);

printf("Enter the pay rate:");
scanf("%f",&payrate);

printf("Your pay rate: %f, Worked hours : %d\n", payrate, workinghours);

int salary= payrate* workinghours;
printf("Salary is %d",salary);



return 0;
}
