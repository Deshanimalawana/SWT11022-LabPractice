#include<stdio.h>
int main(){
    int age;
    float income;

    printf("Enter Age :");
    scanf("%d",&age);

    printf("Enter income:");
    scanf("%f",&income);

    if(age >= 60){
        if(income < 60000){
            printf("Eligible for tax deduction");
        }else{
            printf("Not Eligible for tax deduction");
        }
    }else{
        printf("Not eligible for tax deduction");
    }


    return 0;
}




