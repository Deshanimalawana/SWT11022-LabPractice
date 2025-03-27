#include <stdio.h>
int main()
{
    int input;

    do {
        printf("Enter a positive number: ");
        scanf("%d", &input);
    } while (input <= 10);

    printf("You entered a positive number: %d\n", input);

    return 0;
}
