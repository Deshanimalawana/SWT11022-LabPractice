#include <stdio.h>

int main() {
    char original[10];
    char duplicate[10];

    printf("Enter 10 characters:\n");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &original[i]);
    }

    for (int i = 0; i < 10; i++) {
        duplicate[i] = original[i];
    }

    printf("\nOriginal array: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", original[i]);
    }

    printf("\nDuplicate array: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", duplicate[i]);
    }

    printf("\n");

    return 0;
}
