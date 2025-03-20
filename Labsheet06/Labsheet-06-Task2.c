#include<stdio.h>
int main(){
    int age;
    int income;

    age = 50;
    income = 70000;

    if (age >= 60,income < 60000){
        printf("Eligible for tax deduction");
    }
    else if (age >= 60,income >=60000){
            printf("Not eligible for tax deduction");
    }
    else{
        printf("Not eligible for tax deduction");
    }
    return 0;

}
