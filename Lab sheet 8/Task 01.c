#include<stdio.h>
int IsPrime(int no){
    if (no < 2){
        return 0;
    }
    for (int i= 2; i*i <= no;i++){
        if (no % i == 0){
            return 0;
        }
    }
 return 1;
}
int main (){
    int no;
    printf("Enter a number:");
    scanf("%d",&no);

    if(IsPrime(no)){
        printf("%d is a prime number.\n",no);
    }else{
        printf("%d is not aprime number.\n",no);

    }
    return 0;










}
