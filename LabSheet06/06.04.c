#include<stdio.h>

int main(){
    int age = 50;
    int income = 70000;

    printf("Enter Your Age:");
    scanf("%d",&age);

    printf("Enter Your Income:");
    scanf("%d",&income);

    if ( age >= 60){
        if ( income < 60000){
            printf("Eligible for tax deduction\n");
        }
        else {
            printf("Not Eligible for tax deduction\n");
        }
    }
    else {
        printf("Not Eligible for tax deduction");
    }
    return 0 ;
}
