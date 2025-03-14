#include<stdio.h>
    int main(){

    int num1,num2,num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

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
