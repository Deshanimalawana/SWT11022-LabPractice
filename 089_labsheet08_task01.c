#include<stdio.h>
 int isPrime(int num){
     if(num <= 2){
            return 1;

}else{
        for(int num=2 ; num*num <= num;num ++);
         if (num % 1==0)

            return 0;
     }

}

int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);

if(isPrime(num)){
        printf("%d is a prime number:", num);
}else{
    printf("%d is a not prime number:",num);

}
return 0;

}












