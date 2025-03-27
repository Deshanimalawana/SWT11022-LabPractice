#include<stdio.h>


int isPrime(int n) {
    if(n < 2)
        return 0;
    for (int i =2; i*i <= n;i++) {
        if (n%i==0)
            return 0;
    }
    return 1;
}
int main() {
    int n;
    printf("enter number:");
    scanf("%d",&n);

    if (isPrime(n))
        printf("%d is a prime numer.\n",n);
    else
        printf("%d is not a prime number.\n",n);
    return 0;
}
