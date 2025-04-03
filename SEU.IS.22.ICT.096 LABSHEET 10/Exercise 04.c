#include <stdio.h>

int main() {
    char chars[10];  
    int i;

    
    printf("Enter 10 characters: ");
    for (i = 0; i < 10; i++) {
        scanf(" %c", &chars[i]);  
    }

    
    for (i = 0; i < 10; i++) {
        if (chars[i] >= 'A' && chars[i] <= 'Z') {
            printf("Character %d (%c) is an uppercase letter.\n", i + 1, chars[i]);
        } else if (chars[i] >= 'a' && chars[i] <= 'z') {
            printf("Character %d (%c) is a lowercase letter.\n", i + 1, chars[i]);
        } else {
            printf("Character %d (%c) is not a letter.\n", i + 1, chars[i]);
        }
    }

    return 0;
}