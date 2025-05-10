#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dayofweek;

    printf("enter day of week:");
    scanf("%d",&dayofweek);
    switch(dayofweek){
    case 1:
        printf("monday");
        break;

     case 2:
        printf("tuesday");
        break;

        case 3:
        printf("wednsday");
        break;

        default:
            printf("other days");

    }
    return 0;
}
