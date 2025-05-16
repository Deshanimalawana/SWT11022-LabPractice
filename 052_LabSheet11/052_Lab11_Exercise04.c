#include <stdio.h>

int main() {
    int arr[10], uniqueArr[10];
    int isDuplicate, uniqueCount = 0;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        isDuplicate = 0;
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == uniqueArr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            uniqueArr[uniqueCount++] = arr[i];
        }
    }

    printf("Unique values in the array:\n");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", uniqueArr[i]);
    }

    return 0;
}
