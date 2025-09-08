#include <stdio.h>

#define SIZE 10

int main() {
    int numbers[SIZE];
    int i;

    printf("Enter 10 integers:\n");

    for(i = 0; i < SIZE; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nOriginal order: ");
    for(i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\nReverse order: ");
    for(i = SIZE - 1; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
