#include <stdio.h>

int main(){

   float payrate;
   float workhours;
   printf("Enter Pay rate : ");
   scanf("%f", &payrate);
   printf("Enter Work Hours : ");
   scanf("%f", &workhours);
   float Salary = payrate * workhours;
   printf("Salary = %.2f", Salary);

   return 0;
}