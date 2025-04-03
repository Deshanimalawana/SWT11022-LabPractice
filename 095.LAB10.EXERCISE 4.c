#include <stdio.h>

int main() {
    char characters[10];

    printf("Enter 10 characters: ");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &characters[i]); // Space before %c to handle newline character
    }

    for (int i = 0; i < 10; i++) {
        if (characters[i] >= 'A' && characters[i] <= 'Z') {
            printf("%c is Uppercase\n", characters[i]);
        } else if (characters[i] >= 'a' && characters[i] <= 'z') {
            printf("%c is Lowercase\n", characters[i]);
        } else {
            printf("%c is not an alphabet\n", characters[i]);
        }
    }
    return 0;
}
