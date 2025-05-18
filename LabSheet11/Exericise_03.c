#include <stdio.h>

int main() {
    char original[10], duplicate[10];

    printf("Enter 10 characters:\n");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &original[i]);
        duplicate[i] = original[i];
    }

    printf("\nOriginal Array: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", original[i]);
    }

    printf("\nDuplicated Array: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", duplicate[i]);
    }
    printf("\n");

    return 0;
}
