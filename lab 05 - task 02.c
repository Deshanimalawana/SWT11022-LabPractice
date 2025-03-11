#include <stdio.h>
int main (){

    int number;
    printf("Enter marks:");
    scanf("%d",&number);

    if (number>90 & number<101){
        printf("Excellent");
    }
    else if(number>=75 & number<=89){
        printf("Very Good");
    }else if(number>=50 & number<=74){
        printf("Good");
    }else if(number<50){
        printf("Fail");
    }else{
        printf("Wrong marks");
    }

}
