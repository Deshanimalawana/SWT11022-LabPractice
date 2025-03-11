#include<stdio.h>
int main(){
    int marks = 48;
    printf("Enter Your Marks:");
    scanf("%d",&marks);
    if(marks >= 90){
        printf("Excellent");
    }
    else if(marks >= 75){
        printf("Very Good");
    }
    else if(marks >= 50){
        printf("Good");
    }
    else {
        printf("Fail");
    }
    return 0;
}
