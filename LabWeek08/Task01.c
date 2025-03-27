#include <stdio.h>
int isPrime(int num){
    int a = 2;
    int sw = 0;
    while(num>a){
        if((num%a)==0){
            sw = 1;
            break;
        }
        a++;
    }
    if (sw == 1){
        return 0;
    }else{
        return 1;}
}
int main(){
    int userin =0;
    printf("Enter to find out whether it is prime or not:");
    scanf("%d",&userin);
    int prime = isPrime(userin);
    printf("%d",isPrime(userin));
}
