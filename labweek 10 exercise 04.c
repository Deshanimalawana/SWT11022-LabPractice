#include <stdio.h>

int main() {
    char letter[10];

    printf("Enter your characters:\n");


    for (int i = 0; i < 10; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &letter[i]);
    }


    for (int i = 0; i < 10; i++) {
        if (letter[i] >= 'A' && letter[i] <= 'Z') {
            printf("%c  is an Uppercase letter\n", letter[i]);
        } else if (letter[i] >= 'a' && letter[i] <= 'z') {
            printf("%c  is a Lowercase letter\n", letter[i]);
        } else {
            printf("%c  is not an alphabet or letters\n", letter[i]);
        }
    }

    return 0;
}




