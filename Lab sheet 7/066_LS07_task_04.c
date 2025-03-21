#include <stdio.h>

int main()
{
    int n;

    while (1)
    {
        printf("Enter a negative number: ");
        scanf("%d", &n);

        if (n < 0)
        {
            break;
        }
    }

    printf("You entered a negative number: %d",n);

    return 0;
}
