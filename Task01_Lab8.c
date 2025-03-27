#include <stdio.h>




    int isprime(int number);
    int isprime(int number) {
        if(number<2)
        return 0;
        int x;
        for (x=2; x*x<=number; ++x)
        {
            if(number % x ==0)
                return 0;
        }
        return 1;
    }
    int main () {
    int number;
    printf("Enter the number here:");
    scanf("%d", &number);

    if (isprime(number)) {
        printf("This is a prime number:%d.\n",number);
    }
    else {
        printf("This is not a prime number:%d.\n",number);
    }
    return 0;
    }



