#include <stdio.h>

int main (){

    int age;
    float income;

    printf("Enter Your Age: ");
    scanf("%d",&age);

    printf("Enter Your Income: ");
    scanf("%f",&income);

    if (age >= 60 ) {
        if (income < 60000.0 ){
            printf("Eligible for tax deduction\n");
        }
        else {
            printf("Not Eligible for tax deduction\n");
        }
    }

    else {
        printf("Not Eligible for tax deduction\n");
    }
    return 0;
}
