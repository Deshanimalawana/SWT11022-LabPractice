#include <stdio.h>

int main(){

   float Hour_Rate;
   float Work_Hours;

   printf("Enter Pay rate : ");
   scanf("%f", &Hour_Rate);
   printf("Enter Work Hours : ");
   scanf("%f", &Work_Hours);

   float Total_Salary = Hour_Rate * Work_Hours;
   printf("Salary = %.2f", Total_Salary);

   return 0;
}
