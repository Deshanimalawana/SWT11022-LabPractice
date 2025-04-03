#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chars[10];

    printf("Enter 10 characters: \n");
    for (int i = 0; i < 10; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &chars[i]);
    }

    printf("\nCharacter Cases:\n");
    for (int i = 0; i < 10; i++) {
        if (chars[i] >= 'A' && chars[i] <= 'Z') {
            printf("%c is Uppercase\n", chars[i]);
        } else if (chars[i] >= 'a' && chars[i] <= 'z') {
            printf("%c is Lowercase\n", chars[i]);
        } else {
            printf("%c is not an alphabet\n", chars[i]);
        }
    }


   return 0;
}

