#include <stdio.h>

int main() {
    int arr[10];
    int unique[10];
    int i, j, isUnique, uniqueCount = 0;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        isUnique = 1;

        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }

        if (isUnique) {
            unique[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    printf("Unique numbers are: ");
    for (i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}

