#include <stdio.h>

int main(){
   float hourRate;
   float workHours;

   printf("Enter Pay rate : ");
   scanf("%f", &hourRate);
   printf("Enter Work Hours : ");
   scanf("%f", &workHours);

   float Salary = hourRate * workHours;

   printf("Salary = %.2f", Salary);

   return 0;
}