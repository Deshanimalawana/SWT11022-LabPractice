#include<stdio.h>
int isprime(int num){
    if (num < 2)return 0;
    for (int i = 2; i * i <= num; i++){
        if (num % i == 0)return 0;
    }
    return 1;
}
int main(){
    int num;
    printf("Enter a Number:");
    scanf("%d", &num);


    if(isprime(num))
        printf("%d is a Prime Number.\n", num);
    else
        printf("%d is Not Prime Number.\n", num);
    return 0;



}
