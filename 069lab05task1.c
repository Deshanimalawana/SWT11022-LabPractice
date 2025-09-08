#include <stdio.h>


int main()
{
    int number;

    printf("Enter your number:");
    scanf("%d",&number);
    if (number % 2 == 1) {
        printf(" The number is odd\n" ,number);

    }
    else {
        printf(" The number is even", number );
    }
    return 0;
}
