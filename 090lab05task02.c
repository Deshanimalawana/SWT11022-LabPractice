#include <stdio.h>
int main(){

    int marks;
    printf("Enter your marks :");
    scanf("%d",&marks);

    if(marks>=90){
        printf("\nGrade: Excellent\n");
    }
        else if(marks>=75){
            printf("\nGrade: Very Good\n");
        }
        else if(marks>=50){
            printf("\nGrade: Good\n");
        }
    else{
        printf("\nGrade: Fail\n");
    }
return 0;
}

