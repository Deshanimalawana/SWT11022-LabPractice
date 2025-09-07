#include <stdio.h>
int main ()
{
    int num;

    while (1) {
        printf("Enter the Number:- ");
        scanf("%d", &num);
        if (num < 0) {
            printf("You Entered the Negative Number..!\n");
            break;
        }
        printf("You Entered the Positive Number..!\n");
    }

    return 0;

}
