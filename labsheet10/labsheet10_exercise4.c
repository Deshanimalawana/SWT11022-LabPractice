#include <stdio.h>
#include <ctype.h>
int main() {
    char ch[10];

    for(int i = 0; i < 10; i++) {
        printf("Enter character %d: ", i + 1);
        scanf(" %c", &ch[i]);
    }

    for(int i = 0; i < 10; i++) {
        if (isupper(ch[i])) {
            printf("%c is an uppercase alphabet.\n", ch[i]);
        } else if (islower(ch[i])) {
            printf("%c is a lowercase alphabet.\n", ch[i]);
        } else {
            printf("%c is not an alphabet.\n", ch[i]);
        }
    }

    return 0;
}


