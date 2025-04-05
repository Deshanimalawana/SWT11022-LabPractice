#include <stdio.h>

int main() {

    char chars[10];


    printf("Enter 10 characters:\n");


    for (int i = 0; i < 10; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &chars[i]); //space before %c to handle newline issues
    }


    printf("\nCharacter Analysis:\n");
    for (int i = 0; i < 10; i++) {
        if (chars[i] >= 'A' && chars[i] <= 'Z') {
            printf("'%c' is an Upper-case Alphabet.\n", chars[i]);
        } else if (chars[i] >= 'a' && chars[i] <= 'z') {
            printf("'%c' is a Lower-case Alphabet.\n", chars[i]);
        } else {
            printf("'%c' is not an Alphabet.\n", chars[i]);
        }
    }

    return 0;
}
