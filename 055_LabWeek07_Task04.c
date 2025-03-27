#include <stdio.h>

int main() {
    int num;


    while (1) {
        printf("Enter a number:");
        scanf("%d", &num);
        if (num < 0) {
            break;
        }
        printf("You entered: %d\n", num);
    }

    printf("Negative number entered. Exiting...\n");
    return 0;
}
