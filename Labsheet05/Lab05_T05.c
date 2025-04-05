#include<stdio.h>
int main(){
    int number;
    char*output;

    printf("Enter a number:");
    scanf("%d",&number);

    if (number > 0){
        output = "The number is positive";
    }else if(number < 0){
        output = "The number is negative";
    }else{
        output = "The number is zero";
    }

    printf("%s\n", output);
    return 0;
}
