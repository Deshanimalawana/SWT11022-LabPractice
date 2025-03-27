#include <stdio.h>

int main() {
    int number;

    while(1){
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number < 0) {
            break;
        }
    }

    printf("You Entered a negative number\n");

    return 0;
}






