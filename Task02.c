#include<stdio.h>
int main (){
    int age = 50;
    int income = 5000;

    if (age>=60){
        if (income<6000){
        printf("Eligible for tax deduction\n");

   } else {
        printf("Not eligible for tax deduction\n");

   }
   }else {
       printf("Not eligible for tax deduction\n");
}
return 0;
}
