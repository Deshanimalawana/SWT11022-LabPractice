#include<stdio.h>

int isPrime(int num){
    if(num<=1){
    return 0;
    }
    for (int i=2;i*i<=num;i++){
        if (num% i== 0){
            return 0;
        }
    }
      return 1;
}
int main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);

       if(isPrime(number)){
        printf("%d is a prime number.\n",number);
      }else{
        printf("It's not a prime number.\n",number);
      }
    return 0;
}
