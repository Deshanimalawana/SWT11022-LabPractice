#include <stdio.h>

int main() {
    int arr[10];
    int unique[10];
    int uniqueCount = 0;


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
            unique[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }


    printf("Unique values in the array:\n");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}
