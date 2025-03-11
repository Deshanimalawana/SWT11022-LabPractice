#include <stdio.h>
int main(){

    int number;

    printf("Enter a number", number);
    scanf("%d", &number);

    if(number>0){
        printf("The number is Positive");

    }else if(number<0){
        printf("The number is Negative");
    }else if(number==0){
        printf("The number is Zero");

    }


    return 0;
}
