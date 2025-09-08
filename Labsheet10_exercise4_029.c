#include <stdio.h>

int main() {

    char characters[10];

    printf("Enter 10 characters:\n");
    for (int i = 0; i < 10; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &characters[i]);
    }

   printf("\n Character check:\n");
   for(int i=0; i<10; i++){
        if (characters[i] >= 'A' && characters[i] <= 'Z') {
            printf("%c is Uppercase letter\n", characters[i]);
        }else {
            printf("%c is Lowercase letter\n", characters[i]);
        }

   }
    return 0;
}
