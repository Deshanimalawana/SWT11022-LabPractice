#include <stdio.h>
#include <ctype.h>
int main() {
    char characters[10];
    int i;

    printf("Enter 10 characters:\n");
    for (i = 0; i < 10; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &characters[i]);
    }

    printf("\nCharacter case:\n");
    for (i = 0; i < 10; i++) {
        if (islower(characters[i])) {
            printf("'%c' is lowercase.\n", characters[i]);
        } else if (isupper(characters[i])) {
            printf("'%c' is uppercase.\n", characters[i]);
        } else {
            printf("'%c' is not an alphabet.\n", characters[i]);
        }
    }

    return 0;
}
