#include <stdio.h>
int main(){
    int marks;
    printf("Enter marks:",marks);
    scanf("%d", &marks);
     if(marks>=90){
        printf("Excellent");
     }else if (marks>=75){
         printf("very good");
         }else if(marks>=50){
            printf("good");
          }else{
            printf("fail");
     }

     return 0;

}
