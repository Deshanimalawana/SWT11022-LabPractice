#include <stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    if(marks<50){
        printf("you have been failed");
    }else if(marks<=74){
        printf("Good");
    }
    else if(marks<=89){
        printf("Very Good");
    }
    else{
        printf("Excellent");
    };
    return 0;
}
