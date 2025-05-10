#include<stdio.h>
int main(){
    int Marks;

    printf("Enter Marks:");
    scanf("%d",&Marks);

    if(Marks >= 90){
        printf("Exllent");
    }
    else if(Marks >= 75){
        printf("very Good");
    }
    else if(Marks >= 50){
        printf("Good");
    }
    else{
        printf("Fail");
    }
    return 0;
}
