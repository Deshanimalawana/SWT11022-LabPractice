#include <stdio.h>
#include <stdbool.h>

#define SIZE 05

int main() {
    int numbers[SIZE];
    bool hasDuplicates = false;

    printf("Enter %d integer values:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (numbers[i] == numbers[j]) {
                hasDuplicates = true;
                printf("Duplicate found: %d at positions %d and %d\n",
                      numbers[i], i, j);
            }
        }
    }

    if (!hasDuplicates) {
        printf("No duplicate values found in the array.\n");
    }

    printf("\nArray contents: [");
    for (int i = 0; i < SIZE; i++) {
        printf("%d", numbers[i]);
        if (i < SIZE - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
