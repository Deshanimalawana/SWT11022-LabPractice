#include <stdio.h>

int main(){

   float payRate;
   float Hours;

   printf("Enter Pay rate : ");
   scanf("%f", &payRate);
   printf("Enter Work Hours : ");
   scanf("%f", &Hours);

   float salary = payRate * Hours;

   printf("Salary = %.2f", salary);

   return 0;
}