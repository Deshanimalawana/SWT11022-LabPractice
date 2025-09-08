#include<stdio.h>
int main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if( 100>=number && number >= 90){
        printf("Excellent");
    }  else if ( 89>=number && number >= 75){
        printf("Very Good");
    }  else if ( 74>=number && number >50){
        printf("Good");
    }  else if (number >=50 ){
        printf("fail");
    }  else {
        printf("No number");
    }



    return 0;

}
