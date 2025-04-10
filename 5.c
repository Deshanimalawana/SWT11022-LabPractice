#include <stdio.h>

int main() {
    int num;


    while (1) {
        printf("Enter a number (negative to quit): ");
        scanf("%d", &num);

        if (num < 0) {
            break;
        }

        printf("You entered: %d\n", num);
    }

    printf("Program terminated due to negative input.\n");
    return 0;
}
