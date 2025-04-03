#include <stdio.h>

int main() {
    char ch;
    int i;

    printf("Enter 10 characters: \n");

    for (i = 0; i < 10; i++) {
        scanf(" %c", &ch);

        if (ch >= 'A' && ch <= 'Z') {
            printf("%c is an Uppercase Alphabet.\n", ch);
        } else if (ch >= 'a' && ch <= 'z') {
            printf("%c is a Lowercase Alphabet.\n", ch);
        } else {
            printf("%c is not an alphabet.\n", ch);
        }
    }

    return 0;
}
