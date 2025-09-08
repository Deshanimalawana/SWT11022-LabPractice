#include <stdio.h>
#include <ctype.h>  

int main() {
    char chars[10];  
    int i;
  
    printf("Enter 10 characters:\n");

    
    for (i = 0; i < 10; i++) {
        printf("Character %d:\n ", i + 1);
        scanf(" %s", &chars[i]);
    }

    printf("\nCharacter Analysis:\n");
    for (i = 0; i < 10; i++) {
        if (islower(chars[i])) {
            printf("'%c' is a Lowercase letter.\n", chars[i]);
        } else if (isupper(chars[i])) {
            printf("'%c' is an Uppercase letter.\n", chars[i]);
        } else {
            printf("'%c' is not an alphabet letter.\n", chars[i]);
        }
    }

    return 0;
}