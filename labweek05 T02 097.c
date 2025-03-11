#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks:");
    scanf("%d",&marks);

    if(marks>=90){printf("grade:excellent\n");}
    else if(marks>=75){printf("grade:very good\n");}
    else if(marks>=50){printf("grade:good\n");}
    else{printf("grade:fail\n");}
    return 0;
}
