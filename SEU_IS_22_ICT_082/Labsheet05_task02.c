#include<stdio.h>

int main(){
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);

    if(marks>=90){
      printf("\nGrade:Excellent");

    }else if(marks>=75){
      printf("\nGrade:Very Good");

    }else if(marks>=50){
       printf("\nGrade:Good");

    }
    else {if(marks<50)
      printf("\nGrade:Fail");

    }
        return 0;


}
