#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int check= (n>0)? printf("The number is positive:%d",n): (n==0)? printf("The number is Zero: %d",n): printf("The number is negative: %d",n);
    return 0;
}
