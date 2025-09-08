#include <stdio.h>

int main() {
    int arr[10], unique[10];
    int i, j, isDuplicate, Count = 0;

    printf("Enter 10 integer values:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        isDuplicate = 0;

        for (j = 0; j < Count; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            unique[Count] = arr[i];
            Count++;
        }
    }

    printf("\nOriginal Array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nUnique Array: ");
    for (i = 0; i < Count; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}
