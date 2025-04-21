#include <stdio.h>

int main() {
    char arr1[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    char arr2[10];

    // Duplicate the array
    for (int i = 0; i < 10; i++) {
        arr2[i] = arr1[i];
    }

    // Display both arrays
    printf("Original array: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", arr1[i]);
    }

    printf("\nCopied array: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", arr2[i]);
    }

    return 0;
}
