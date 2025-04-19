#include <stdio.h>

int main() {
    char num[10], copy[10];
    int i;


    printf("Enter 10 characters:\n");
    for(i = 0; i < 10; i++) {
        scanf(" %c", &num[i]);
    }

    for(i = 0; i < 10; i++) {
        copy[i] = num[i];
    }

    printf("\nOriginal Array: ");
    for(i = 0; i < 10; i++) {
        printf("%c ", num[i]);
    }

    printf("\nCopied Array:   ");
    for(i = 0; i < 10; i++) {
        printf("%c ", copy[i]);
    }

    return 0;

}
