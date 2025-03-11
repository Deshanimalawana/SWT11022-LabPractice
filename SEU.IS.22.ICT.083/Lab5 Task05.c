#include <stdio.h>
int main () {
   int num;
   printf("Enter a number: ",num);
   scanf("%d",&num);

   if (num > 0)
   {
       printf("num is positive");
   }
    else if ( num < 0)
   {
       printf("num is negative");
   }
   else if (num ==0)
   {
       printf("num is zero");
   }
   return 0;

}
