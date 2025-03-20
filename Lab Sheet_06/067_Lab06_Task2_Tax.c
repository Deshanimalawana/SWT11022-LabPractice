#include <stdio.h>
int main ()
{
    int age;
    float income;

    printf("Enter Your Age :- ");
    scanf("%d", &age);

    printf("Enter Your Income :- ");
    scanf("%d", &income);

    if (age >=60) {
        if (income < 60000) {
            printf("You are Eligible for TAX Deduction..!\n");
        }else {
            printf("You are Not Eligible for TAX Deduction..!\n");
        }
    }else {
        printf("You are Not Eligible for TAX Deduction..!\n");
    }
    return 0;
}
