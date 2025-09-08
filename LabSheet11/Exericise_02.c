#include <stdio.h>

#define SIZE 10

int main() {
    float numbers[SIZE];
    float target;
    int i, found = 0;

    printf("Enter 10 floating-point numbers:\n");
    for (i = 0; i < SIZE; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }


    printf("\nEnter a number to search: ");
    scanf("%f", &target);


    for (i = 0; i < SIZE; i++) {
        if (numbers[i] == target) {
            found = 1;
            break;
        }
    }


    if (found) {
        printf("\n%.2f is present in the array.\n", target);
    } else {
        printf("\n%.2f is not present in the array.\n", target);
    }

    return 0;
}
