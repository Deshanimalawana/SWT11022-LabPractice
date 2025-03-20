#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dayofweek = 3;

    switch(dayofweek){
    case 1:
        printf("Monday.\n");
        break;
    case 2:
        printf("Tuesday.\n");
        break;
    case 3:
        printf("wenesday.\n");
        break;
    default :
        printf("other day.\n");
    }
    return 0;
}
