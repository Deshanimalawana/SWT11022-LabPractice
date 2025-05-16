#include <stdio.h>

int main() {
    char array1[10], array2[10];

    printf("Enter 10 characters:\n");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &array1[i]);
    }

    for (int i = 0; i < 10; i++) {
        array2[i] = array1[i];
    }

    printf("Array 1: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", array1[i]);
    }

    printf("\nArray 2: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", array2[i]);
    }

    return 0;
}
