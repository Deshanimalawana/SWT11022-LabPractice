#include <stdio.h>
int main(){

    int age = 59;
    int income = 80000;

    if (age>=60){
        if (income<60000){
            printf("Eligible for tax deduction.\n");
        }else {
            printf("Not eligible for tax deduction.\n");
        }
    }else {
        printf("Not eligible for tax deduction.\n");
    }

    return 0;
}
