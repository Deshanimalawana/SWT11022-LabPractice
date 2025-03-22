#include <stdio.h>

int main() {
    int age;
    float income;

    age = 65;
    income = 50000.0;

    if (age >= 60) {
        if (income < 60000.0) {
            printf("You are eligible for a tax deduction");
        } else {
            printf("You are not eligible for a tax deduction");
        }
    } else {
        printf("You are not eligible for a tax deduction");
    }

    return 0;
}
