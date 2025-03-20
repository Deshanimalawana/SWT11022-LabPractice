#include<stdio.h>

int main( ){
    int age=40;
    int income=45000.00;

    if(age>=60){
        if (income<60000){
            printf("Eligible for tax deduction");
        }
        else if (income>=60000){
            printf("Not Eligible for tax deduction");
        }
    }
    else{
            printf("Not Eligible for tax deduction");
    }

return 0;
}
