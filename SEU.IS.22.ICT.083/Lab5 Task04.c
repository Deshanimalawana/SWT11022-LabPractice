#include <stdio.h>
int main () {
   int a,b,c;
   printf("Enter a number (a):",a);
   scanf("%d",&a);
   printf("Enter a number (b):",b);
   scanf("%d",&b);
   printf("Enter a number (c):",c);
   scanf("%d",&c);
   if (a>b)
   {
       if (a>c)
       {
           printf("a is largest");
       }
       else
       {
           printf("c is largest");
       }
   }
   else if (b>c)
   {
       printf("b is largest");
   }
   else
   {
       printf("c is largest");
   }

   return 0;


}
