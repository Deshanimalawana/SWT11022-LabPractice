#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if (num<0){
        printf("%d is a negative number", num);
    }
    else if (num==0){
        printf("This is Zero");
    }
    else{
        printf("%d is a positive number", num);
    }
    return 0;
}
