#include <stdio.h>

int main() {
    float numbers[10];
    float search;
    int found = 0;

    printf("Enter 10 floating point numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }

    printf("\nEnter a floating-point number to search: ");
    scanf("%f", &search);

    for (int i = 0; i < 10; i++) {
        if (numbers[i] == search) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("\n%.2f is present in the array.\n", search);
    } else {
        printf("\n%.2f is NOT present in the array.\n", search);
    }

    return 0;
}

