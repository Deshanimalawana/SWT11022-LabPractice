#include <stdio.h>

int main() {
    char array1[10]={'c','b','f','g','t','a','n','v','k','s'};
    char array2[10];

    //for (int i = 0; i < 10; i++) {
       // scanf(" %c", &array1[i]);
    //}

    for (int i = 0; i < 10; i++) {
        array2[i] = array1[i];
    }

    printf("Original Array: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", array1[i]);
    }

    printf("\nDuplicated Array: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", array2[i]);
    }

    return 0;
}
