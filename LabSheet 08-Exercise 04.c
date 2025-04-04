#include <stdio.h>
#include <ctype.h>

int main() {
    char inputs[10];

    printf("Enter 10 characters:\n");
    for (int i = 0; i < 10; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &inputs[i]);
    }

    printf("\nCharacter analysis:\n");
    for (int i = 0; i < 10; i++) {
        if (isalpha(inputs[i])) {
            if (islower(inputs[i])) {
                printf("'%c' is a lowercase alphabet.\n", inputs[i]);
            } else if (isupper(inputs[i])) {
                printf("'%c' is an uppercase alphabet.\n", inputs[i]);
            }
        } else {
            printf("'%c' is not an alphabet.\n", inputs[i]);
        }
    }

    return 0;
}
