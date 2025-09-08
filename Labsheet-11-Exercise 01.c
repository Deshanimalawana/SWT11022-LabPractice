#include <stdio.h>

int main() {
    int numbers[10];
    int i;

    // Step 1: Read 10 integers from the user
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Step 2: Print the array elements in reverse order
    printf("\nArray in reverse order:\n");
    for(i = 9; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }

    return 0;
}

