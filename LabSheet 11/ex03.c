#include <stdio.h>

int main() {
    char original[10];
    char duplicate[10];

    printf("Enter 10 characters:\n");
    for (int i = 0; i < 10; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &original[i]);
    }

    for (int i = 0; i < 10; i++) {
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

    return 0;
}
