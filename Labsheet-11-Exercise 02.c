#include <stdio.h>

int main() {
    float numbers[10], searchNum;
    int i, found = 0;

    // Step 1: Read 10 floating point numbers from user
    printf("Enter 10 floating point numbers:\n");
    for(i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }

    // Step 2: Read another floating point number
    printf("\nEnter a number to search: ");
    scanf("%f", &searchNum);

    // Step 3: Check whether the number is present in array
    for(i = 0; i < 10; i++) {
        if(numbers[i] == searchNum) {
            found = 1;
            break;
        }
    }

    if(found) {
        printf("The number %.2f is present in the array.\n", searchNum);
    } else {
        printf("The number %.2f is NOT present in the array.\n", searchNum);
    }

    return 0;
}

