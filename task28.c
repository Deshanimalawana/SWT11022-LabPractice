#include<stdio.h>
int main()
{
    int num;
    while (1){
    printf("Enter the number:");
    scanf("%d",&num);

        if(num<0){
            break;
        }
    }
    printf("This is a negative number:");
    return 0;
}
