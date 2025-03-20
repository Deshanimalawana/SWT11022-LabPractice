#include<stdio.h>

int main(){
int age;
int income;

printf("Enter your age: \n");
scanf("%d", &age);
printf("Enter your income: \n");
scanf("%d", &income);


if(age>=60){
    if(income<60000){
        printf("Eligible for Tax Deduction");
    }
    else{
        printf("Not Eligible for Tax Deduction");
    }
}
else{
    printf("Not Eligible for Tax Deduction");
}
}
