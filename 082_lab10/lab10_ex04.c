#include <stdio.h>

int main() {
    char alphabet[10];

    printf("Enter 10 alphabet: ");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &alphabet[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (alphabet[i] >= 'A' && alphabet[i] <= 'Z') {
            printf("%c is Uppercase\n", alphabet[i]);
        } else if(alphabet[i] >= 'a' && alphabet[i] <= 'z') {
            printf("%c is Lowercase\n", alphabet[i]);
        }
    }
    return 0;
}
