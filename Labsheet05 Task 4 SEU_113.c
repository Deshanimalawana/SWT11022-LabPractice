#include<stdio.h>

int main()
{

    int num1,num2,num3;

    printf("Enter a Number 1:");
    scanf("%d",&num1);

    printf("Enter a Number 2:");
    scanf("%d",&num2);

    printf("Enter a Number 3:");
    scanf("%d",&num3);

    if (num1 > num2 && num1 > num3)
    {
     printf("Entered Three Numbers: %d,%d,%d\n",num1,num2,num3);
     printf("Lager Number is: %d",num1);
    }

    else if (num2 > num3 && num2 > num1)
    {
     printf("Entered Three Numbers: %d,%d,%d\n",num1,num2,num3);
     printf("Lager Number is: %d",num2);
    }

    else if (num3 > num2 && num3 > num1)
    {
     printf("Entered Three Numbers: %d,%d,%d\n",num1,num2,num3);
     printf("Lager Number is: %d",num3);
    }

    return 0;

}
