#include <stdio.h>


int main() {

    printf("Enter age:\n");
    int age;
    scanf("%d",&age);

    printf("Enter income:\n");
    int income;
    scanf("%d",&income);






    if (age >=60)
    {
        if (income < 60000.0) {
            printf("You are eligible for a tax deduction.\n");

        }
        else {
            printf("You are not eligible for a tax deduction.\n");
        }

    }
    else {
        printf("You are not eligible for a tax deduction.\n");
    }
    return 0;
}
