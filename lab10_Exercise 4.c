#include <stdio.h>

int main(){

   char characters[10];

   for(int i=0; i < 10; i++){
        printf("Enter character %d : ", i+1);
        scanf("%s", &characters[i]);
    }

    for(int i = 0; i < 10; i++) {
        if (characters[i] >= 'A' && characters[i] <= 'Z'){
            printf("%c is Uppercase.\n", characters[i]);

        } else if (characters[i] >= 'a' && characters[i] <= 'z') {
            printf("%c is Lowercase.\n", characters[i]);

        } else {
            printf("%c is not a valid letter.\n", characters[i]);
        }
    }

}
