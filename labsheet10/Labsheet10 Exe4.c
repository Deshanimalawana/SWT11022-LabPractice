

#include <stdio.h>
#include <ctype.h>

int main() {
    char alphabets[10];
    int i;


    printf("Enter 10 characters:\n");
    for(i = 0; i < 10; i++) {
        printf("Enter character %d: ", i + 1);
        scanf(" %c", &alphabets[i]);
    }


    for(i = 0; i < 10; i++) {
        if(islower(alphabets[i])) {
            printf("Character %c is lowercase.\n", alphabets[i]);
        } else if(isupper(alphabets[i])) {
            printf("Character %c is uppercase.\n", alphabets[i]);
        } else {
            printf("Character %c is not an alphabet.\n", alphabets[i]);
        }
}
return 0;
}

