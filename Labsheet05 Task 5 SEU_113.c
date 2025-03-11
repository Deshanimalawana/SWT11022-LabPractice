#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);

    if(num > 0 )
    {
        printf("The Number is Positive");
    }

    else if(num<0)
    {
        printf("The Number is Negative");
    }

    else if(num==0)
        {

            printf("The Number is Zero");
        }

        return 0;
    }
