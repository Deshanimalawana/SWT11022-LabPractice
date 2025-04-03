#include <stdio.h>
#include <ctype.h>

int main() {
    char chars[10];
    int i;

    printf("Enter 10 characters:\n");
    for(i = 0; i < 10; i++) {
        printf("Enter character %d: ", i + 1);
        scanf(" %c", &chars[i]);
    }

    printf("\nCharacter analysis:\n");
    for(i = 0; i < 10; i++) {
        if(isupper(chars[i])) {
            printf("'%c' is an uppercase letter\n", chars[i]);
        }
        else if(islower(chars[i])) {
            printf("'%c' is a lowercase letter\n", chars[i]);
        }
        else {
            printf("'%c' is not an alphabet letter\n", chars[i]);
        }
    }

    return 0;
}
