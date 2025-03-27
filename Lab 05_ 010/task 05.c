#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d" , &number);
    if(number>0){printf("the number is positive");}
    else if(number<0){printf("the number is negative");}
    else {printf("the number is zero");}

    return 0;


}
