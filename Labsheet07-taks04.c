#include <stdio.h>

int main() {
    int number;

    
    while (1) {
        
        printf("Enter a number (negative to exit): ");
        scanf("%d", &number);

        
        
        
        if (number < 0) {
            printf("Negative number entered. Exiting the loop.\n");
            break;
        }

        
        printf("You entered: %d\n", number);
    }

    return 0;
}
