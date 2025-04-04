#include <stdio.h>

int main() {
    char letters[10];

    printf("Enter 10 characters:\n");
    for(int i = 0; i < 10; i++) {
        scanf(" %c", &letters[i]);
    }

    for(int i = 0; i < 10; i++) {
        if(letters[i] >= 'A' && letters[i] <= 'Z') {
            printf("%c is Uppercase\n", letters[i]);
        } else if(letters[i] >= 'a' && letters[i] <= 'z') {
            printf("%c is Lowercase\n", letters[i]);
        } else {
            printf("%c is not an alphabet\n", letters[i]);
        }
    }

    return 0;
}
