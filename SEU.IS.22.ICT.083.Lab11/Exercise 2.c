#include<stdio.h>
int main() {
   float arr[10];
   float num;
   int found;
   printf("Enter 10 numbers:\n");
   for(int i=1;i<=10;i++)
   {
       scanf("\n%f",&arr[i]);
   }
   printf("Enter another float number\n");
   scanf("%f",&num);

   for(int i=1;i<=10;i++)
   {
       if(arr[i]==num)
       {
           found=1;
           break;
       }
   }
   if (found==1)
   {
       printf("Number is present in array");
   }
       else
       {
           printf("Number is not present in array");
       }

   return 0;

}
