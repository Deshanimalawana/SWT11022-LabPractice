#include <stdio.h>
int isPrime(int num){
if (num<=1)
    return 0;
    for(int i=2;i*i<=num;i++){
        if (num%i==0)
            return 0;
    }
  return 1;
}


int main(){
    int number;
    printf("enter the number:");
    scanf("%d",&number);
    if(isPrime(number)){
        printf("this is prime number");
    }
    else {
        printf("this is not prime number");
    }
    return 0;
}
