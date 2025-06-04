#include <stdio.h>

int main() {
    char array1[10];
    char array2[10];

    printf("Enter 10 characters:\n");
    for (int i = 0; i < 10; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &array1[i]);
    }

    for (int i = 0; i < 10; i++) {
        array2[i] = array1[i];
    }

    printf("\nOriginal Array: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", array1[i]);
    }

    printf("\nDuplicated Array:   ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", array2[i]);
    }

    printf("\n");

    return 0;
}
