#include<stdio.h>
int isprime(int num)
{
    if (num<2)
        return 0;
    for (int i=2; i*i<=num; i++){
        if(num %i==0)
            return 0;
    }
    return 0;
}


int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);

    if (isprime( number)){
        printf("This is a prime number: %d",number);
    }else{
        printf("This is a not prime number: %d",number);

    }

    return 0;
}

