#include <stdio.h>

int main() {
    char letters[10];

    printf("Enter 10 characters:\n");
    for (int i = 0; i < 10; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &letters[i]);
    }

    printf("\nCharacter Classification:\n");
    for (int i = 0; i < 10; i++) {
        if (letters[i] >= 'A' && letters[i] <= 'Z') {
            printf("%c is an UPPERCASE letter\n", letters[i]);
        }
        else if (letters[i] >= 'a' && letters[i] <= 'z') {
            printf("%c is a LOWERCASE letter\n", letters[i]);
        }
        else {
            printf("%c is NOT an alphabet letter\n", letters[i]);
        }
    }
    return 0;
}
