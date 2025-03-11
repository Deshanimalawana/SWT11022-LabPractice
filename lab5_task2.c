#include<stdio.h>
int main(){
    int marks;
    printf("enter your marks");
    scanf("%d",&marks);
    if(marks>=90){
        printf("grade :excellent");
    }else if (marks>75){
        printf("grade :very good");
    }else if(marks>50){
        printf("grade :good");
    }else{
        printf("fail");

    }

return 0;
}
