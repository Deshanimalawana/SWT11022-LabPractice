#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    float income;

    printf("Enter The your age:");
    scanf("%d",&age);

    printf("Enter The your income:");
    scanf("%f",&income);

    if (age >= 60){
        if (income < 60000.0){
            printf("\neligible for a tax deduction.\n");
        }else{
            printf("\nNot eligible for a tax deduction.\n");
        }
    }else{
        printf("\nNot eligible for a tax deduction.\n");
    }
    return 0;
}





