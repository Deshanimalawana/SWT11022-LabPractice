#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age ;
    float income;

    printf("Enter your age :");
    scanf("%d",&age);
    printf("Enter Your Income:");
    scanf("%f",&income);

    if (age>=60){
        if (income < 60000.0){
            printf("You are eligible for a tax deduction.\n");
        }else{
            printf("you are not eligible for a tax deduction.\n");
        }
    }else {
        printf("you are not eligible for a tax deduction.\n");
    }

    return 0;
}
