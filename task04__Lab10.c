#include <stdio.h>

int main() {
    char input[10];
    int i;

    printf("Enter 10 characters:\n");

    for (i = 0; i < 10; i++) {
        scanf(" %c", &input[i]);

        if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')) {
            if (input[i] >= 'a' && input[i] <= 'z') {
                printf("Character %c is a lower-case alphabet.\n", input[i]);
            } else {
                printf("Character %c is an upper-case alphabet.\n", input[i]);
            }
        } else {
            printf("Character %c is not an alphabet.\n", input[i]);
        }
    }

    return 0;
}
