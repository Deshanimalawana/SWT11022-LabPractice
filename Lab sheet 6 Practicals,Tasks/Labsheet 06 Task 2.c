#include <stdio.h>
int  main(){
    int age = 70;
    int income = 60000;

    if (age>=60){
        if (income<60000){
            printf("Eligible for tax deduction");
        }else {
            printf("Not Eligible for Tax Deduction");
        }
    }else{
        printf("Not Eligible for Tax Deduction");
        return 0;
    }

}
