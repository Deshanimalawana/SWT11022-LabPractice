#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    while(num>0){
            printf("Enter a number:");
            scanf("%d", &num);
            if (num <0){
                break;
            }
    }

    return 0;
}
