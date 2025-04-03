#include <stdio.h>
#include <ctype.h>

int main() {
    char chars[10];

    printf("Enter 10 characters: ");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &chars[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (islower(chars[i])) {
            printf("%c is a Lower-case letter\n", chars[i]);
        } else if (isupper(chars[i])) {
            printf("%c is an Upper-case letter\n", chars[i]);
        } else {
            printf("%c is not an alphabet\n", chars[i]);
        }
    }

    return 0;
}
