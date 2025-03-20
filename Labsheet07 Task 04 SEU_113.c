#include<stdio.h>
int main()
{
    int num;
    while(1){
    printf("Enter a Number: ");
    scanf("%d ",&num);

    if (num < 0)
        {
           printf("Negative  Number Entered. Exiting the loop. \n");
           break;
        }

    }

    return 0;
}

