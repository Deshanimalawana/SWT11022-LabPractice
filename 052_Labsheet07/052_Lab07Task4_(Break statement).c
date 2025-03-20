#include <stdio.h>

int main() {
    int num;

    printf("Enter numbers (negative number to exit):\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num < 0) {
            printf("You entered a Negative number \n");
            break;
        }else{

        printf("You entered Possitive number: %d\n", num);
        }
    }

    return 0;
    }


