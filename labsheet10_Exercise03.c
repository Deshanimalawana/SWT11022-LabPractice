#include <stdio.h>

int main() {
    float numbers[10], max;
    int i;

    printf("Enter 10 floating point numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }
    max = numbers[0];
    for (i = 1; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("\nNumbers entered: ");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", numbers[i]);
    }

    printf("\nLargest number: %.2f\n", max);

    return 0;
}
