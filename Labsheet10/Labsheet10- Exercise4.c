#include <stdio.h>

int main() {
    char chars[10];

    printf("Enter 10 characters: ");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &chars[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (chars[i] >= 'A' && chars[i] <= 'Z') {
            printf("%c is Uppercase\n", chars[i]);
        } else if (chars[i] >= 'a' && chars[i] <= 'z') {
            printf("%c is Lowercase\n", chars[i]);
        } else {
            printf("%c is not a letter\n", chars[i]);
        }
    }

    return 0;
}

