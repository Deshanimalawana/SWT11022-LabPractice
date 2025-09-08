#include <stdio.h>

int main() {
    int arr[10], unique[10], count = 0;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
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
            unique[count++] = arr[i];
        }
    }

    printf("Unique values:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}
