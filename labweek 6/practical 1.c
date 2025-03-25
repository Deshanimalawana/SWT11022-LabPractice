#include<stdio.h>
int main () {
   int age;
   float income;
   printf("enter your age:");
   scanf("%d",&age);
   printf("enter your income:");
   scanf("%.f",&income);

   if (age>=60){
     if (income<60000){
        printf("you are eligibility for a tax deduction.\n");}
     else{
        printf("you are not eligibility for a tax deduction.\n");}
     }

   else{
        printf("you are not eligibility for a tax deduction.\n");}
return 0;
}
