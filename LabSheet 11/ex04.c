#include <stdio.h>

int main() {
    int arr[10], unique[10];
    int i, j, isDuplicate, uniqueCount = 0;

    printf("Enter 10 integer values:\n");
    for(i = 0; i < 10; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++) {
        isDuplicate = 0;

        for(j = 0; j < uniqueCount; j++) {
            if(arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if(!isDuplicate) {
            unique[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    printf("\nUnique values:\n");
    for(i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}
