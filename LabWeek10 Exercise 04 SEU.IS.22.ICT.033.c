#include <stdio.h>

int main() {
    char letters[10];

    printf("Enter 10 inputs:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Character %d: ", i);
        scanf(" %c", &letters[i]);
    }

    printf("alphabet:\n");
    for (int i = 1; i <= 10; i++) {
        if (letters[i] >= 'A' && letters[i] <= 'Z') {
            printf("%c is an Uppercase\n", letters[i]);
        } else if (letters[i] >= 'a' && letters[i] <= 'z') {
            printf("%c is a Lowercase\n", letters[i]);
        } else {
            printf("%c is not an alphabet\n", letters[i]);
        }
    }

    return 0;
}
