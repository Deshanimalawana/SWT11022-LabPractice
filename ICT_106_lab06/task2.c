#include<stdio.h>
int main(){

   int age,income;

   printf("enter the age:");
   scanf("%d",&age);
   printf("enter the income");
   scanf("%d",&income);

   if(age>=60){
       if(income<60000){
         printf("eligible for tax deduction.\n");
       }else{
         printf("not eligible for tax deduction.\n");
    }
   }else{
    printf("not eligible for tax deduction.\n");
    }
    return 0;
}
