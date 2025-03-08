#include <stdio.h>

int main(){
   
   float Rate;
   float Hours;

   printf("Enter Pay rate : ");
   scanf("%f", &Rate);

   printf("Enter Work Hours : ");
   scanf("%f", &Hours);

   float Salary = Rate * Hours;

   printf("Salary = %.2f", Salary);

}