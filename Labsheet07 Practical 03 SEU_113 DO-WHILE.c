#include<stdio.h>
int main()
{
    int input;
    do
    {
        printf("Enter a Positive Number: ");
        scanf("%d",&input);

    }
    while (input<= 0);
    {
        printf("You Entered a Positive Number: %d\n",input);
    }
    return 0;
}
