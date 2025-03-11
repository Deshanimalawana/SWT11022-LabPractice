#include<stdio.h>
int main()
{
    int age;
    printf("enter age:");
    scanf("%d",&age);
    if(age>=18){printf("eligible to vote\n");}
    else{printf("not eligible to vote\n");}
    return 0;
}
