#include <stdio.h>

int main() {
    int enterednum;

    while(1) {
        printf("Enter a number: ");
        scanf("%d", &enterednum);
        if(enterednum < 0) {
            break;
        }
        printf("You entered: %d\n", enterednum);
    }

    printf("User entered a Negative number , exiting program.\n");
    return 0;
}
