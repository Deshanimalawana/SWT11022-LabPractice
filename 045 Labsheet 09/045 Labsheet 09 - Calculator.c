#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float multi(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int main() {
    float num1, num2, result;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    result = add(num1, num2);
    printf("\nAddition: %.2f", result);

    result = sub(num1, num2);
    printf("\nSubtraction: %.2f", result);

    result = multi(num1, num2);
    printf("\nMultiplication: %.2f", result);

    result = divide(num1, num2);
    printf("\nDivision: %.2f", result);

    return 0;
}
