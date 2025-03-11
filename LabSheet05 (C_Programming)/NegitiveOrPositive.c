#include <stdio.h>
int main(){
    int number;
    printf("enter a number");
    scanf("%d",&number);
    if(number>0){
        printf("number is positive");
    }else if(number<0){
        printf("number is negitive");
    }else{
        printf("number is 0");
    };
    return 0;
}
