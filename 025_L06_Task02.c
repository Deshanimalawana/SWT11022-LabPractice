#include <stdio.h>
int main()
{
    int age, income;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter income: ");
    scanf("%d", &income);

    if (age >= 60){
        if(income < 60000){
            printf("Eligible for tax deduction.\n");
        } else {
            printf("Not eligible for tax deduction.\n");
        }
    } else {
        printf("Not eligible for tax deduction.\n");
    }

    return 0;
}
