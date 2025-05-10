#include<stdio.h>
int main (){
   int array[10];
   printf("Enter 10 numbers\n");
   for(int i=1;i<=10;i++)
   {
       scanf("%d",&array[i]);
   }
   printf("\nreverse of 10 numbers\n");
   for(int i=10;i>=1;i--)
   {
       printf("%d\n",array[i]);
   }
   return 0;


}
