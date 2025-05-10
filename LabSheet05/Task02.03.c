#include<stdio.h>
int main(){
    int Marks;

    printf("Enter Marks:");
    scanf("%d",&Marks);

    if(Marks >= 90){
        printf("Grade: Exllent");
    }
    else if(Marks >= 75){
        printf("Grade: very Good");
    }
    else if(Marks >= 50){
        printf("Grade: Good");
    }
    else{
        printf("Grade: Fail");
    }
    return 0;
}
