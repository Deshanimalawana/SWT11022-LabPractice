#include <stdio.h>

int main() {
    int numbers[10], unique[10];
    int i, j, isDuplicate, uniqueCount = 0;

    // Step 1: Get 10 integer values from user
    printf("Enter 10 integer values:\n");
    for(i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Step 2 & 3: Check for duplicates and store unique values
    for(i = 0; i < 10; i++) {
        isDuplicate = 0;
        for(j = 0; j < uniqueCount; j++) {
            if(numbers[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate) {
            unique[uniqueCount] = numbers[i];
            uniqueCount++;
        }
    }

    // Displaying original array
    printf("\nOriginal Array: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

    // Displaying unique array
    printf("\nUnique Values Array: ");
    for(i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}

