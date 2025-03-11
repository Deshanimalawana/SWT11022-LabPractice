#include <stdio.h>
int main(){
    int marks;
        printf("enter your marks:");
        scanf("%d",&marks);

        if (marks>=90){
            printf("Excellent.\n");
        }else if (marks>=75){
            printf("very good.\n");
        }else if(marks>=50){
            printf("good.\n");
        }else {
        printf("Fail.\n");
        }

return 0;
}
