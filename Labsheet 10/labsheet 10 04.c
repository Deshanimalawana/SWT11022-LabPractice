#include <stdio.h>

int main() {
    float numbers[10];

    float max_value;

    printf("Enter 10 floating point numbers:\n");


    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
        if (i == 0) {
            max_value = numbers[i];
        }
        else if (numbers[i] > max_value) {
            max_value = numbers[i];
        }
    }
    printf("\nThe largest number entered is: %.2f\n", max_value);

    return 0;
}

