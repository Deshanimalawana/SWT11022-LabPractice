#include <stdio.h>
int main(){
    int age = 66;
    float income = 50000.00;

    if (age >= 60) {
        if (income < 60000){
            printf("Eligible for tax Deduction");
        }else{
            printf("Not Eligible for tax Deduction");
            }
    }else{
        printf("Not Eligible for tax Deduction");
    }

    return 0;
}
