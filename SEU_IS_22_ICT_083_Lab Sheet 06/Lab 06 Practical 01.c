#include <stdio.h>
int main () {
   int age;
   float income;

   printf("Enter your age?: ");
   scanf("%d",&age);
   printf("Enter your income?: ");
   scanf("%f",&income);

   if (age>=60) {
      if (income<60000)
      {
          printf("You're Eligible for tax deduction");
      }
      else
      {
          printf("You're not eligible to tax deduction");
      }
   }
   else
    {
        printf("You're not eligible to tax deduction");
    }
    return 0;
   }



