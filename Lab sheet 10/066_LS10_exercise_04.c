#include <stdio.h>

int main() {
    char characters[10];

    printf("Enter 10 characters:\n");

    for(int i = 0; i < 10; i++)
    {
        printf("Enter character %d: ", i + 1);
        scanf(" %c", &characters[i]);
    }

    printf("\nCharacter Analysis:\n");
    for(int i = 0; i < 10; i++)
    {
        if(characters[i] >= 'A' && characters[i] <= 'Z')
        {
            printf("Character %d ('%c') is UPPERCASE.\n", i + 1, characters[i]);
        } 
        else if(characters[i] >= 'a' && characters[i] <= 'z')
        {
            printf("Character %d ('%c') is LOWERCASE.\n", i + 1, characters[i]);
        } 
        else
        {
            printf("Character %d ('%c') is NOT an alphabet.\n", i + 1, characters[i]);
        }
    }

    return 0;
}
