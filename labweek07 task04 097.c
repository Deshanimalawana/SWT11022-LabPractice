#include<stdio.h>
int main()
{
    int num;
    while(1){
        printf("enter a number: ");
        scanf("%d",&num);

        if (num < 0){
            break;
        }
    }
    printf("loop exited. negative number entered.\n");
    return 0;
}
