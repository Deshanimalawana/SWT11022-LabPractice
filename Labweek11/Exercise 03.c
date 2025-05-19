#include <stdio.h>

int main() {
    char original[10], copy[10];

    printf("Enter 10 characters:\n");
    for (int i = 0; i < 10; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &original[i]);
    }

    for (int i = 0; i < 10; i++) {
        copy[i] = original[i];
    }

    printf("\nOriginal array: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", original[i]);
    }

    printf("\nCopied array:  ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", copy[i]);
    }

    printf("\n");
    return 0;
}
