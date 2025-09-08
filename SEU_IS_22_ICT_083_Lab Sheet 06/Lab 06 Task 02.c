#include <stdio.h>
int main () {
   int age =55;
   float income = 50000.0;

   if (age>=60) {
      if (income<60000)
      {
          printf("You're Eligible for tax deduction");
      }
      else
      {
          printf("You're not eligible for tax deduction");
      }
   }
   else
    {
        printf("You're not eligible for tax deduction");
    }
    return 0;
   }
