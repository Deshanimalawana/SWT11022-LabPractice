#include <stdio.h>

int main() {

    float numbers[10];

    float large;

    printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }


    large = numbers[0];
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > large) {
            large = numbers[i];
        }
    }

    printf("\nMaximum value: %.2f\n", large);

    return 0;
}
