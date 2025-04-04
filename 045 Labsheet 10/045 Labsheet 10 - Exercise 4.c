#include <stdio.h>
#include <ctype.h>

int main() {
    char input[10];

    printf("Enter 10 characters:\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter character %d: ", i + 1);
        scanf(" %c", &input[i]);
    }

    printf("\nCheck characters:\n");

    for (int i = 0; i < 10; i++) {
        if (islower(input[i])) {
            printf("Character %d, '%c' is a lowercase letter.\n", i + 1, input[i]);
        } else if (isupper(input[i])) {
            printf("Character %d, '%c' is an uppercase letter.\n", i + 1, input[i]);
        } else {
            printf("Character %d, '%c' is not an alphabet.\n", i + 1, input[i]);
        }
    }

    return 0;
}
