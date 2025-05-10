
#include <stdio.h>

int main() {
    char original[10], duplicate[10];
    int i;

    // Step 1: Declare and read 10 characters into original array
    printf("Enter 10 characters:\n");
    for(i = 0; i < 10; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &original[i]);  // Notice the space before %c to consume whitespace
    }

    // Step 2: Duplicate the array
    for(i = 0; i < 10; i++) {
        duplicate[i] = original[i];
    }

    // Step 3: Display both arrays
    printf("\nOriginal Array: ");
    for(i = 0; i < 10; i++) {
        printf("%c ", original[i]);
    }

    printf("\nDuplicate Array: ");
    for(i = 0; i < 10; i++) {
        printf("%c ", duplicate[i]);
    }

    return 0;
}
