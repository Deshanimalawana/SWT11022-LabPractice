#include <stdio.h>
#include <stdlib.h>

int isprime(int num){
    if (num< 2){
        return 1;
    }
 for(int i = 2 ; i*i <= num;i++){
  if (num%i==0);
  return 0;
  }
  return 1;
}

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if(isprime(num)){
        printf("%d is a prime number.\n",num);
    } else {
        printf("%d is not a prime number.\n",num);
    }
    return 0;
}
