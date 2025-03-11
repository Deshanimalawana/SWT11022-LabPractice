#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    printf("Enter the number:");
    scanf("%d %d %d",&num3 , &num2, &num3);

    if (num1>num2){
        printf("The largest number is %d",num1);
    }

    else if (num2>num3){
        printf("The largest number is %d",num2);
    }
    else {
        printf("The largest number is %d",num3);
    }
    return 0;
}


