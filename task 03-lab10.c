#include <stdio.h>

int main() {
    float numbers[10];

    float max;

    printf("Enter 10 floating-point numbers:\n");

    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]); // Store user input
    }

    max = numbers[0];
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("\nThe maximum value is: %.2f\n", max);

    return 0;
}
