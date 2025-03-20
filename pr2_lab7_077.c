#include <stdio.h>
int main()
{
    int input;

    do {
        printf("Enter positive Number: ");
        scanf("%d",&input);
    } while (input<=0);

    printf("You entered a positive number: %d\n",input);

    return 0;
}
