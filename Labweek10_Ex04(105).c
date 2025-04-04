#include <stdio.h>

int main() {
    char value[10];

    printf("Enter any 10 characters you like:\n");

    for (int i = 0; i < 10; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &value[i]);
    }

    printf("\nLet's check what type of character you entered!\n");
    for (int i = 0; i < 10; i++) {
        if (value[i] >= 'A' && value[i] <= 'Z') {
            printf("%c is an uppercase character\n", value[i]);
        } else if (value[i] >= 'a' && value[i] <= 'z') {
            printf("%c is a lowercase character\n", value[i]);
        } else {
            printf("%c is not a character of alphabet\n", value[i]);
        }
    }

    return 0;
}
