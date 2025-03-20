#include <stdio.h>

int main() {
    int num;
    while(1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num < 0) {
            printf("Negative number entered.\n");
            break;
        } else {
            printf("You entered: %d\n", num);
        }
    }

    return 0;
}
