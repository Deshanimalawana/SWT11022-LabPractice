#include <stdio.h>

int main() {
    char letter;

    printf("Enter 10 characters:\n");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &letter);

        if (letter >= 'A' && letter <= 'Z') {
            printf("%c is an Upper-case letter\n", letter);
        } else if (letter >= 'a' && letter <= 'z') {
            printf("%c is a Lower-case letter\n", letter);
        } else {
            printf("%c is not an alphabet\n", letter);
        }
    }

    return 0;
}
