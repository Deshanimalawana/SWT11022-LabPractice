#include<stdio.h>

int main(){
    int number=85;

    if(number>90){
        printf("Grade=Excellent.\n");
    }
    else if(number>=75){
        printf("Grade=Very good.\n");
    }
    else if(number>=50){
        printf("Grade=Good.\n");
    }
    else{
        printf("Grade=Fail.\n");
    }
}
