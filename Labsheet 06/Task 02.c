#include<stdio.h>

int main() {
    int age, income;
    age = 60;
    income = 70000;

    if(age >= 60) {
        if(income>=60000){
            printf("Not eligible for a tax deduction.\n");
        } else {
            printf("Eligible for a tax deduction.\n");
        }
    } else {
        printf("Not eligible for a tax deduction.\n");
    }
    return 0;
}