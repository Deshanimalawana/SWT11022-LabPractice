#include<stdio.h>

int main(){

    int age ;
    int income ;

    printf("Enter Income:");
    scanf("%d",&income);

    printf("Enter Age:");
    scanf("%d",&age);

    if(age >= 60 && income < 60000){
        printf("Eligible for tax deduction \n");
    }

    else if(age >= 60 && income >= 60000){
        printf("Not eligible for tax deduction \n");

    }

    else{
        printf("Not eligible for tax deduction \n");
    }






return 0;
}
