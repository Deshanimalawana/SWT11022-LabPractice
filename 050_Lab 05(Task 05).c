#include<stdio.h>
int main(){

    int number;

    printf("Enter a number:");
    scanf("%d",&number);

    if(number<0) {
        printf("The number is negative.");
    }else if(number>0) {
        printf("The number is positive.");
    }else{
        printf("The number is Zero.");
    }

    return 0;
}
