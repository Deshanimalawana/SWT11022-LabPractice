#include <stdio.h>

int main() {
    int arr[10], unique[10], i, j, isUnique, uniqueCount = 0;

    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++) {
        isUnique = 1;
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if(isUnique) {
            unique[uniqueCount++] = arr[i];
        }
    }

    printf("Unique values:\n");
    for(i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}
