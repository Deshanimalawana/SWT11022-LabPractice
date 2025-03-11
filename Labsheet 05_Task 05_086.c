#include <stdio.h>
int main(){

    int number;
    printf("Enter a Number value:");
    scanf("%d",&number);

    if(number>0){
    printf("The number is positive number");
    }
    else if(number<0){
    printf("The number is negative number");
    }
    else if(number==0){
        printf("The number is Zero");
    }
return 0;

}

