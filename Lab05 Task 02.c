#include <stdio.h>
int main () {
   int number;
   printf("Enter your number: ",number);
   scanf ("%d",&number);
   if (number >= 90)
   {
       printf("Excellent");
   }
   else
   {
     if (number >=75)
     {
         printf("Very good");
     }
     else
     {
         if (number >=50)
         {
             printf("Good");
         }
         else
         {
             printf("fail");
         }
     }
   }

    return 0;
}
