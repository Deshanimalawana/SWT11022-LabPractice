#include <stdio.h>

#define SIZE 10

int main() {
    float numbers[SIZE];
    int i;

    printf("Enter 10 floating-point numbers:\n");
    for (i = 0; i < SIZE; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }

    printf("\nYou entered:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%.2f ", numbers[i]);
    }
    printf("\n");

    return 0;
}
