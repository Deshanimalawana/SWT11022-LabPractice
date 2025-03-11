#include<stdio.h>
int main(){
    int number;

    printf("Enter the number.");
    scanf("%d",&number);

    if(number<50){
        printf("Grade: Fail.");
    }else if(50<=74){
        printf("Grade: Good.");
    }else if(75<=90){
        printf(" Grade: Very Good.");
    }else{
        printf("Grade:  Excellent.");
    }

    return 0;

}
