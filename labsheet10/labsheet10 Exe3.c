
#include <stdio.h>

int main() {
    float numbers[10];
    float maxValue;

    printf("Enter 10 floating point numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }


    maxValue = numbers[0];

    for (int i = 1; i < 10; i++) {
        if (numbers[i] > maxValue) {
            maxValue = numbers[i];
        }
    }

    printf("The largest number is: %.2f\n", maxValue);

    return 0;
}
