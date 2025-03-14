
#include <stdio.h>
int main(){

    int number1;
    int number2;
    int number3;
    printf("Enter  Number 1 :");
    scanf("%d",&number1);
    printf("Enter  Number 2 :");
    scanf("%d",&number2);
    printf("Enter  Number 3 :");
    scanf("%d",&number3);


    if(number1>number2){
        printf("%d is largest",number1);
    }else if(number2>number3){
        printf("%d is largest",number2);
    }else if(number1>number3){
        printf("%d is largest",number1);
    }else{
        printf("%d is largest",number3);
    }


}

