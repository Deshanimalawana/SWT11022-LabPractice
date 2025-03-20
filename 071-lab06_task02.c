#include<stdio.h>
int main() {
    int age = 60;
    float income = 60000.0;

    if(age >= 60) {
        if (income < 60000.0) {
            printf("You are eligible for a tex deduction.\n");
        } else{
            printf("You are not eligible for a tex deduction.\n");
        }
    }else {
        printf("You are not eligible for a tex deduction.\n");

    }
    return 0;


}









