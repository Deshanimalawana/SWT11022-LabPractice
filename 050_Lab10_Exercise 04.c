#include <stdio.h>

int main() {
    char chars[10];



        printf("Enter  10 character : \n");
        for (int i = 0; i < 10; i++){
        scanf(" %c", &chars[i]);
        }


        for (int i = 0; i < 10; i++) {
            if (chars[i] >= 'a' && chars[i] <= 'z') {
                printf("The character '%c' is a lowercase alphabet.\n", chars[i]);
            } else if (chars[i] >= 'A' && chars[i] <= 'Z') {
                printf("The character '%c' is an uppercase alphabet.\n", chars[i]);

        } else {
            printf("The character '%c' is not an alphabet.\n", chars[i]);
        }
    }

    return 0;
}
