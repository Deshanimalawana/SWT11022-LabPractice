#include <stdio.h>

int main() {
    int arr[10], unique[10];
    int i, j, isDuplicate, uniqueCount = 0;

    // Step 1: Get 10 integer values from the user
    printf("Enter 10 integer values:\n");
    for(i = 0; i < 10; i++) {
        printf("Int value:\n");
        scanf("%d", &arr[i]);
    }

    // Step 2 and Step 3: Check for duplicates and store unique values
    for(i = 0; i < 10; i++) {
        isDuplicate = 0;
        for(j = 0; j < uniqueCount; j++) {
            if(arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // If not a duplicate, add to unique array
        if(!isDuplicate) {
            unique[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    // Print the unique values
    printf("\nUnique values are:\n");
    for(i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}

