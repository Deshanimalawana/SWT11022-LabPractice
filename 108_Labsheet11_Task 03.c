#include <stdio.h>

int main() {
    char arr1[10], arr2[10];

    printf("Enter 10 characters:\n");
    for (int i = 0; i < 10; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &arr1[i]);
    }

    for (int i = 0; i < 10; i++) {
        arr2[i] = arr1[i];
    }

    printf("\nOriginal Array: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", arr1[i]);
    }

    printf("\nCopied Array:   ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", arr2[i]);
    }

    printf("\n");
    return 0;
}
