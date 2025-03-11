#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your age: ");
    scanf("%d",&age);

    if(age<18)
    {
        printf("Not Eligible to Vote");
    }
    else{
        printf("Eligible to Vote");
    }
    return 0;
}
