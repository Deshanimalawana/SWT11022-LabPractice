#include <stdio.h>
#include <ctype.h>

int main() {
    char characters[10];
    int i;

    printf("Enter 10 characters:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter character %d: ", i + 1);
        scanf(" %c", &characters[i]);
    }

    for (i = 0; i < 10; i++) {
        if (isalpha(characters[i])) {
            if (islower(characters[i])) {
                printf("'%c' is a lowercase letter.\n", characters[i]);
            } else {
                printf("'%c' is an uppercase letter.\n", characters[i]);
            }
        } else {
            printf("'%c' is not an alphabet.\n", characters[i]);
        }
    }

    return 0;
}

