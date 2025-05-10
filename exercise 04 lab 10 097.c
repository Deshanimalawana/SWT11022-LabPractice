#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter 10 characters:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter character %d: ", i + 1);
        scanf(" %c", &ch);


        if (isupper(ch)) {
            printf("%c is an Uppercase letter.\n", ch);
        } else if (islower(ch)) {
            printf("%c is a Lowercase letter.\n", ch);
        } else {
            printf("%c is not an alphabet.\n", ch);
        }
    }

    return 0;
}
