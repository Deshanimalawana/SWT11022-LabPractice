#include <stdio.h>
#include <ctype.h>
int main() {
    char characters[10];
    printf("Enter 10 characters:\n");
    for (int i = 0; i < 10; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &characters[i]);
    }
    printf("\nCharacter Classification:\n");
    for (int i = 0; i < 10; i++) {
        if (islower(characters[i])) {
            printf("%c is a lowercase letter.\n", characters[i]);
        } else if (isupper(characters[i])) {
            printf("%c is an uppercase letter.\n", characters[i]);
        } else {
            printf("%c is not an alphabet letter.\n", characters[i]);
        }
    }
    return 0;
}
