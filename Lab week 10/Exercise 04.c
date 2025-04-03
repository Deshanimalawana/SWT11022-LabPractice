#include <stdio.h>

int main() {
    char letters[10];

    printf("Enter 10 characters:\n");

    for (int i = 0; i < 10; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &letters[i]);
    }

    printf("\nCharacter Analysis:\n");
    for (int i = 0; i < 10; i++) {
        if (letters[i] >= 'A' && letters[i] <= 'Z') {
            printf("%c is an Uppercase letter\n", letters[i]);
        } else if (letters[i] >= 'a' && letters[i] <= 'z') {
            printf("%c is a Lowercase letter\n", letters[i]);
        } else {
            printf("%c is not an alphabet\n", letters[i]);
        }
    }

    return 0;
}
