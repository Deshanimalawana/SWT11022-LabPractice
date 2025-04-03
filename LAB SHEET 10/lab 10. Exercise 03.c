#include <stdio.h>

int main() {
    float numbers[10], max;

    printf("Enter 10 floating-point numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &numbers[i]);
    }

    max = numbers[0];
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("Largest Number: %.2f\n", max);
    return 0;
}





