#include<stdio.h>

int main(){
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    if(marks >= 90){
        printf("Excellent");
    }
    else if(75 < marks < 89){
        printf("very good");
    }
    else if(50 < marks < 74){
        printf("good");
    }
    else{
        printf("fail");
    }
    return 0;

}
