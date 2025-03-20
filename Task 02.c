#include <stdio.h>
#include <stdlib.h>

int main(){
    int age;
    float income;

    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your income: ");
    scanf("%f",&income);

    if (age >= 60){
        if (income < 60000.0){
            printf("Eligible for tax deduction");
        }else{
            printf("Not eligible for tax deduction");
        }
    }else{
        printf("Not eligible for tax deduction");
    }

    return 0;
}
