#include <stdio.h>
#include <ctype.h>

int main() {
    char chars[10];
    printf("Enter 10 characters:\n");
    for (int i = 0; i < 10; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &chars[i]);
    }
    printf("\nCharacter Analysis:\n");
    for (int i = 0; i < 10; i++) {
        if (islower(chars[i])) {
            printf("%c is a lowercase letter.\n", chars[i]);
        } else if (isupper(chars[i])) {
            printf("%c is an uppercase letter.\n", chars[i]);
        } else {
            printf("%c is not an alphabet.\n", chars[i]);
        }
    }

    return 0;
}


