#include <stdio.h>

int main() {
    char arr1[10], arr2[10];

    printf("Enter 10 characters:\n");
    for(int i = 0; i < 10; i++) {
        scanf(" %c", &arr1[i]);
        arr2[i] = arr1[i];
    }

    printf("Original array:\n");
    for(int i = 0; i < 10; i++) {
        printf("%c ", arr1[i]);
    }

    printf("\nDuplicated array:\n");
    for(int i = 0; i < 10; i++) {
        printf("%c ", arr2[i]);
    }

    return 0;
}
