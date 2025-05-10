#include <stdio.h>
#include <ctype.h>
int main() {
    char chars[10];
    printf("Please enter 10 characters:\n");
    for (int i = 0; i < 10; i++)
        {
        printf("Enter character %d: ", i + 1);
        scanf(" %c", &chars[i]);
        }
    for (int i = 0; i < 10; i++)
    {
        if (isupper(chars[i]))
        {
            printf("Character '%c' is an Uppercase Alphabet.\n", chars[i]);
        } else if (islower(chars[i]))
        {
            printf("Character '%c' is a Lowercase Alphabet.\n", chars[i]);
        } else
        {
            printf("Character '%c' is not an alphabet.\n", chars[i]);
        }
    }
    return 0;
}

