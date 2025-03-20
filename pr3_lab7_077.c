#include <stdio.h>
int main()
{
    int input;

    do {
        printf("Enter a positive number: ");
        scanf("%d",&input);
    } while (input <= 0);

    printf("You Entered a positive number: %d",input);

    return 0;
}
