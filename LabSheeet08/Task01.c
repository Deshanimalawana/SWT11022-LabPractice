#include<stdio.h>

int isPrime(int num){
    if (num <= 2){
        return 1;
    }

    for(int i =2 ; i*i <= num; i++){
    if (num%i==0);
        return 0;
    }
     return 1;
}

int main ()
{
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);


    if(isPrime(num)){
        printf("%d is a prime number.\n",num);
    }else {
        printf("%d is a not a prime number.\n",num);
    }
    return 0;
}
