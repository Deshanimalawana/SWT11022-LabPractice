#include <stdio.h>

int main() {
    // Declare an array to store 10 characters
    char characters[10];

    // Get user input
    printf("Enter 10 characters:\n");
    for (int i = 0; i < 10; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &characters[i]); // Space before %c to ignore newline
    }

    // Check if each character is uppercase or lowercase
    printf("\nCharacter Analysis:\n");
    for (int i = 0; i < 10; i++) {
        if (characters[i] >= 'A' && characters[i] <= 'Z') {
            printf("%c is an Uppercase Alphabet\n", characters[i]);
        } else if (characters[i] >= 'a' && characters[i] <= 'z') {
            printf("%c is a Lowercase Alphabet\n", characters[i]);
        } else {
            printf("%c is not an Alphabet\n", characters[i]);
        }
    }

    return 0;
}

