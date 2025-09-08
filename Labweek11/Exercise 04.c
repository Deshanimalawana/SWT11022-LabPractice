#include <stdio.h>

int main() {
    int arr[10], unique[10], uniqueCount = 0;

    printf("Enter 10 integer values:\n");
    for (int i = 0; i < 10; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unique[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    printf("\nUnique values:\n");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }

    printf("\n");
    return 0;
}
