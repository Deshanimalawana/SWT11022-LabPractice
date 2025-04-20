#include <stdio.h>

int main() {
    int numbers[10], unique[10];
    int i, j, k = 0;
    int isDuplicate;

    // Step 1: Get 10 integers from the user
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        printf("Enter integer #%d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Step 2 & 3: Check for duplicates and store unique values
    for(i = 0; i < 10; i++) {
        isDuplicate = 0;
        for(j = 0; j < k; j++) {
            if(numbers[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if(isDuplicate == 0) {
            unique[k] = numbers[i];
            k++;
        }
    }

    // Step 4: Print results
    printf("\nOriginal array: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

    // Check if there were duplicates
    if(k == 10) {
        printf("\nNo duplicate values found.");
    }

    printf("\nUnique values array: ");
    for(i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}

