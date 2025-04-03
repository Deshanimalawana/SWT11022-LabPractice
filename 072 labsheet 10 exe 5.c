#include <stdio.h>


int main() {
    char input[10];
    int i;

    printf("Enter 10 characters:\n");

    for (i = 0; i < 10; i++) {
        scanf(" %c", &input[i]);
    }

    printf("\nCharacter analysis:\n");

    for (i = 0; i < 10; i++) {
        if (isalpha(input[i])) {
            if (islower(input[i])) {
                printf("'%c' is a lower-case alphabet.\n", input[i]);
            } else {
                printf("'%c' is an upper-case alphabet.\n", input[i]);
            }
        } else {
            printf("'%c' is not an alphabet.\n", input[i]);
        }
    }

    return 0;
}
