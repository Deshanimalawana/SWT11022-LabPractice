#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d", &num);

    if (num>=0){
        if (num==0){
            printf("The number is Zero");
        }else
            printf("The number is Positive");
    }else {
        printf("The number is Negative");
    }

    return 0;
}
