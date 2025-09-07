#include <stdio.h>
int main ()
{
    int age = 55;
    float income = 50000.0;

    if (age >= 60) {
            if (income > 60000.0) {
                 printf("You are eligible for a TAX Deduction.\n");
            }else {
                 printf("You are Not eligible for a TAX Deduction.\n");
            }
    }else {
         printf("You are Not eligible for a TAX Deduction.\n");
    }

    return 0;
}
