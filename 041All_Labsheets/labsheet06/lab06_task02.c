#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 60;
    int income = 50000;

    if (age>=60){
        if(income<60000){
            printf("Eligible for tax deduction");
        }
        else if (income >=60000){
            printf("Not eligible for tax deduction");
        }
    }
    else{
        printf("Not eligible for tax deduction");
    }

    return 0;
}
