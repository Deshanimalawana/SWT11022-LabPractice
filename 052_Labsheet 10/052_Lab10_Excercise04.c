#include <stdio.h>
#include <ctype.h>

int main() {
    char characters[10];

    printf("Enter 10 characters one by one:\n");


    for (int i = 0; i < 10; i++) {
        printf("Enter character %d: ", i );
        scanf(" %c", &characters[i]);
    }


    for (int i = 0; i < 10; i++) {
        if (isupper(characters[i])) {
            printf("Character %c is an uppercase letter.\n", characters[i]);
        } else if (islower(characters[i])) {
            printf("Character %c is a lowercase letter.\n", characters[i]);
        } else {
            printf("Character %c is not an alphabet.\n", characters[i]);
        }
    }

    return 0;
}
