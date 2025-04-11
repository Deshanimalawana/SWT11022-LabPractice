#include<stdio.h>

int isPrime(int number){
    if (number <= 1) return 0;

    for(int i = 2; i*i <= number; i++){
        if(number % i == 0){
            return 0;
        }

    }
    return 1;
}

int main(){
    int num;

    printf("Enter a Number : ");
    scanf("%d", &num);

    if(isPrime(num)){
        printf("\n%d is a Prime Number.", num);
    } else {
        printf("\n%d is Not a Prime Number.", num);
    }
    return 0;
}
