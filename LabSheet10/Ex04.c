#include <stdio.h>

int main() {
    char chars[10];

    printf("Enter 10 characters:\n");

    for(int i = 0; i < 10; i++) {
        printf("Enter character %d: ", i+1);
        scanf(" %c", &chars[i]);
    }

    printf("\nCharacter Analysis:\n");

    for(int i = 0; i < 10; i++) {
        if(isupper(chars[i])) {
            printf("'%c' is an uppercase alphabet\n", chars[i]);
        }
        else if(islower(chars[i])) {
            printf("'%c' is a lowercase alphabet\n", chars[i]);
        }
        else {
            printf("'%c' is not an alphabet character\n", chars[i]);
        }
    }

    return 0;
}
