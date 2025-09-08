#include <stdio.h>

int main() {
    int number;

    while (1) {
        printf("Enter a number (negative number to exit): ");
        scanf("%d", &number);


        if (number < 0) {

            break;
        }


        printf("You entered: %d\n", number);
    }

    return 0;
}
