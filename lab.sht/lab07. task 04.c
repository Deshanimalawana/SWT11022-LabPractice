#include <stdio.h>

int main() {
    int number;


    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);


        if (number < 0) {

            break;
        }

        printf("You entered: %d\n", number);
    }

    printf("Negative number entered. Exiting...\n");
    return 0;
}
