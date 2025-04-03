#include <stdio.h>


int main() {

    char characters[10];


    printf("Enter 10 characters:\n");


    for (int i = 0; i < 10; i++) {
        printf("Enter character %d: ", i + 1);
        scanf(" %c", &characters[i]);
    }


    for (int i = 0; i < 10; i++) {
        if (isupper(characters[i])) {
            printf("Character %d (%c) is an uppercase letter.\n", i + 1, characters[i]);
        } else if (islower(characters[i])) {
            printf("Character %d (%c) is a lowercase letter.\n", i + 1, characters[i]);
        } else {
            printf("Character %d (%c) is not an alphabet letter.\n", i + 1, characters[i]);
        }
    }

    return 0;
}
