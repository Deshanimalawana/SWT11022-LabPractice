#include <stdio.h>
int main(){
    int age;
    int income;
    age=75;
    income=50000;

    if (age>=60){
        if (income<60000){
            printf("Eligible for tax deduction\n");
        }else{
            printf("Not eligible for tax deduction\n");
        }
    }else{
       printf("Not eligible for tax deduction\n");
    }
    return 0;
}
