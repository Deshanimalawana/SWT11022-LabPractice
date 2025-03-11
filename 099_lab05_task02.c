#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);
    if (marks>=90){
        printf("Grade: Excellent\n");
    }
    else if (marks>=75){
        printf("Grade: Very good\n");
    }
    else if (marks>=50){
        printf("Grade: Good");
    }
    else {
        printf("Fail");
    }
    return 0;
}
