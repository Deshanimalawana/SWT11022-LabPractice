#include<stdio.h>
int main(){
    int number;
    printf("Enter marks:");
    scanf("%d",&number);
    if( 100>=number && number >= 90){
        printf("Grade: Excellent\n");
    }  else if ( 89>=number && number >= 75){
        printf("Grade: Very Good\n");
    }  else if ( 74>=number && number >=50){
        printf("Grade: Good\n");
    }  else  {
        printf("Grade: Fail\n");
    }



    return 0;

}
