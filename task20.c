#include<stdio.h>
int main()
{
    int age;
    printf("enter your age: ");
    scanf("%d",&age);

    int income;
    printf("enter income:");

    scanf("%d",&income);

    if (age >= 60){
        if (income < 60000){
            printf("you are eligible for tax dedaction");
        }else{
            printf("you are not eligible for tax dedaction");
        }
    }else{
        printf("you are not eligible to tax dedaction");
    }

    return 0;
}

