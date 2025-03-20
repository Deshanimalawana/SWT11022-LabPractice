#include <stdio.h>
int main(){

    int age=35;
    int income= 45000;

    printf("Enter your age:");
    scanf("%d", &age);
    printf("Enter your Income:");
    scanf("%d", &income);


    if(age>=60){
        if (income<60000){
            printf("Eligible for tax deduction");
        }
        else if (income>=60000){
            printf("Not eligible for tax deduction");
        }
    }   else if (age<60){
        printf("Not eligible for tax deduction");
    }

    return 0;

}
