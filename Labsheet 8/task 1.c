#include<stdio.h>
int prime(int num){
    if(num <= 1)
        return 0;
    for(int i = 2; i < num; i++){
        if (num % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int num;

    printf("Enter number:");
    scanf("%d",&num);

    if(prime(num))
        printf("%d is prime number.\n",num);
    else
        printf("%d is not prime number.\n",num);
    return 0;
}
