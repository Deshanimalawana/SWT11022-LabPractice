#include <stdio.h>
int main() {
    char original[10], copy[10];

    // Read 10 characters
    printf("Enter 10 characters:\n");
    for(int i = 0; i < 10; i++) {
        scanf(" %c", &original[i]); // Note the space before %c
        copy[i] = original[i]; // Copying
    }

    // Display both arrays
    printf("Original Array: ");
    for(int i = 0; i < 10; i++) {
        printf("%c ", original[i]);
    }

    printf("\nCopied Array: ");
    for(int i = 0; i < 10; i++) {
        printf("%c ", copy[i]);
    }

    return 0;
}
