#include<stdio.h>

int isPrime(int num)
{
    if (num<=0)
    {
        return 0;
    }
    for (int i =2;i * i <= num;i++)
    {
        if(num % i ==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num ;
    printf("Enter a Number: ");
    scanf("%d",&num);
    if(isPrime(num))
    {
        printf("%d is Prime Number.\n",num);
    }else
    {
       printf("%d is Not Prime Number.\n",num);
    }
    return 0;
}
