#include <stdio.h>
int main () {
   int num;
   printf("Enter a number: ",num);
   scanf("%d",&num);

   if (num > 0)
   {
       printf("The number is positive.");
   }
    else if ( num < 0)
   {
       printf("The number is negative.");
   }
   else if (num ==0)
   {
       printf("The number is zero.");
   }
   return 0;

}
