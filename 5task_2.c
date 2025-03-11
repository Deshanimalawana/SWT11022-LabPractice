#include<stdio.h>

int main(){
    int marks ;
     printf("enter marks: " ,marks);
     scanf("%d", &marks);

     if(marks>=90){
        printf("excellent");
     }else if(marks>=75){
     printf("very good");
     }else if(marks>=50){
     printf("good");
     }else{
     printf ("fail");
     }



    return 0;
}
