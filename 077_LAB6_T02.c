#include <STDIO.H>
int main()
{
    int age = 65;
    int income = 50000;

    if (age >=60){
        if (income < 60000){
                printf(" You are Eligible for tax deduction\n");

        } else {
            printf("You are not Eligible for tax deduction\n");

        }
    }else {
        printf("Not eligible for tax deduction\n");
    }

     return 0;
    }

