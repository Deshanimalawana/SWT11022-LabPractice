#include <stdio.h>

int main() {
    int original[10];
    int unique[10];
    int isDuplicate, uniqueCount = 0;

    printf("Enter 10 integer values:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number ");
        scanf("%d", &original[i]);
    }

    for (int i = 0; i < 10; i++) {
        isDuplicate = 0;
        for (int j = 0; j < uniqueCount; j++) {
            if (original[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unique[uniqueCount] = original[i];
            uniqueCount++;
        }
    }

    printf("\nOriginal array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", original[i]);
    }

    printf("\nUnique values: ");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }

    printf("\n");

    return 0;
}
