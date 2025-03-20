#include <stdio.h>

int main() {
    int age;
    float income;

    printf("Enter the age: ");
    scanf("%d", &age);

    printf("Enter the income: ");
    scanf("%f", &income);

    if (age >= 60) {
        if (income > 60000.0) {
            printf("You are eligible for tax deduction.\n");
        } else {
            printf("You are not eligible for tax deduction.\n");
        }
    } else {
        printf("You are not eligible for tax deduction because age is below 60.\n");
    }

    return 0;
}
