#include <stdio.h>

int main() {


    char characters[10];

    printf("Enter 10 characters:\n");


    for (int i = 0; i < 10; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &characters[i]);
    }


    printf("\nCharacter Classification:\n");
    for (int i = 0; i < 10; i++) {
        if (characters[i] >= 'A' && characters[i] <= 'Z') {
            printf("'%c' is an Uppercase Alphabet\n", characters[i]);
        } else if (characters[i] >= 'a' && characters[i] <= 'z') {
            printf("'%c' is a Lowercase Alphabet\n", characters[i]);
        } else {
            printf("'%c' is not an Alphabet\n", characters[i]);
        }
    }

    return 0;
}
