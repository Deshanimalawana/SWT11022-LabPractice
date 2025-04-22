#include <stdio.h>
#include <stdbool.h>

#define SIZE 05

int main() {
    int original[SIZE];
    int unique[SIZE];
    int uniqueSize = 0;

    printf("Enter %d integer values:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &original[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        bool isDuplicate = false;

        for (int j = 0; j < uniqueSize; j++) {
            if (original[i] == unique[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            unique[uniqueSize] = original[i];
            uniqueSize++;
        }
    }

    printf("\nOriginal array: [");
    for (int i = 0; i < SIZE; i++) {
        printf("%d", original[i]);
        if (i < SIZE - 1) printf(", ");
    }
    printf("]\n");

    printf("Unique array: [");
    for (int i = 0; i < uniqueSize; i++) {
        printf("%d", unique[i]);
        if (i < uniqueSize - 1) printf(", ");
    }
    printf("]\n");

    printf("Found %d unique values out of %d\n", uniqueSize, SIZE);

    return 0;
}
