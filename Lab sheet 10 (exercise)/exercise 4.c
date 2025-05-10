#include <stdio.h>
#include <ctype.h>

int main() {
    char ch[10];
    printf("Enter 10 characters:\n");

    for (int i = 0; i < 10; i++) {
        scanf(" %c", &ch[i]);
        printf("%c is %s\n", ch[i], islower(ch[i]) ? "lowercase" : isupper(ch[i]) ? "uppercase" : "not a letter");
    }

    return 0;
}
