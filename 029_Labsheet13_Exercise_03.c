#include <stdio.h>

void MaxMin(int num1, int num2, int *max, int *min) {
    if (num1 > num2) {
        *max = num1;
        *min = num2;
    } else {
        *max = num2;
        *min = num1;
    }
}

int main() {
    int number1, number2, maximum, minimum;

    printf("Enter the first integer: ");
    scanf("%d", &number1);

    printf("Enter the second integer: ");
    scanf("%d", &number2);

    MaxMin(number1, number2, &maximum, &minimum);

    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d\n", minimum);

    return 0;
}
