#include <stdio.h>

int main() {
    int num;

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num < 0) {
            printf("Exiting loop... Goodbye!\n");
            break;
        }
    }

    return 0;
}
