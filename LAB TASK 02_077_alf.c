#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if (marks >=90){
        printf("Excelt");

    }
    else if (marks>=75){
        printf("Very Goog");
    }

    else if (marks>=50){
        printf("Good");
    }
    else {
        printf("fail");
    }

   return 0;
}

