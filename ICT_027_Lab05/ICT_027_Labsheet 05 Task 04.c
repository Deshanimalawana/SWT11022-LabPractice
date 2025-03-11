#include<stdio.h>
    int main(){

    int num1,num2,num3;
    printf("Enter First Number:");
    scanf("%d",&num1);
    printf("Enter Second Number:");
    scanf("%d",&num2);
    printf("Enter Third Number:");
    scanf("%d",&num3);

    if(num1>=num2&&num1>=num3){
        printf("The Largest Number is:%d",num1);
    }
    else if (num2>=num1&&num2>=num3){
        printf("The Largest Number is:%d",num2);
    }
    else{
        printf("The Largest Number is:%d",num3);
    }
    return 0;
    }
