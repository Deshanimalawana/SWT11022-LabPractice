#include <stdio.h>
#include <ctype.h>

int main() {
    char letters[10];

    printf("Enter 10 characters:\n");
    for(int i = 0; i < 10; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &letters[i]); // space before %c is important to consume previous newline
    }

    printf("\nCharacter case check:\n");
    for(int i = 0; i < 10; i++) {
        if(isalpha(letters[i])) {
            if(isupper(letters[i])) {
                printf("Character %d (%c) is Upper-case\n", i + 1, letters[i]);
            } else {
                printf("Character %d (%c) is Lower-case\n", i + 1, letters[i]);
            }
        } else {
            printf("Character %d (%c) is not an alphabet\n", i + 1, letters[i]);
        }
    }

    return 0;
}
