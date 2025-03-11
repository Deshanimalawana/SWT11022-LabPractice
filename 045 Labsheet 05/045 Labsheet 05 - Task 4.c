#include <stdio.h>

int main() {
    int number1;
    int number2;
    int number3;

    printf("Enter your number: ");
    scanf("%d", &number1);
    printf("Enter your number: ");
    scanf("%d", &number2);
    printf("Enter your number: ");
    scanf("%d", &number3);

    if (number1 >= number2 && number1 >= number3) {
        printf("The largest number is %d.\n", number1);
    } else if (number2 >= number1 && number2 >= number3) {
        printf("The largest number is %d.\n", number2);
    } else {
        printf("The largest number is %d.\n", number3);
    }

    return 0;
}
