#include <stdio.h>
int main(){

    int number;
    printf("Enter number:");
    scanf("%d",&number);

    if (number>0){
        printf("The number is positive");
    }
    else if (number<0){
        printf("The number is Negative");
    }
    else{
        printf("The number is Zero");
    }
    return 0;

  }
