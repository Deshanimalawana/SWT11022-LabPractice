#include <stdio.h>

int isPrime(int num)
{
    int i;
    for(i=2;i<num;i++)
    {
        if(num%i != 0)
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);

    if(isPrime(n))
    {
        printf("\n%d is a prime number",n);
    }
    else
    {
        printf("\n%d is not a prime number",n);
    }

    return 0;
}
