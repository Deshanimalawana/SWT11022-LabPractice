#include <stdio.h>

int main(){

   float Per_Hour_Rate;
   float Work_Hours;

   printf("Enter Pay rate : ");
   scanf("%f", &Per_Hour_Rate);
   printf("Enter Work Hours : ");
   scanf("%f", &Work_Hours);

   float Salary = Per_Hour_Rate * Work_Hours;
   printf("Salary = %.2f", Salary);
   return 0;
   
}