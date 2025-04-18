#include <stdio.h>

int main() {

    char array1[10] = {'a','b','c','d','e','6','7','8','9','0'};
    int size = sizeof(array1) /sizeof(array1[0]);
    char array2[10];

    for (int i = 0; i < size; i++) {
        array2[i] = array1[i];
    }

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%c ", array1[i]);
    }
    printf("\n");

    printf("Duplicate Array: ");
    for (int i = 0; i < size; i++) {
        printf("%c ", array2[i]);
    }
    return 0;
}
