#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dayofweek = 3;
    switch(dayofweek){
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    default:
        printf("Other days");
    }
    return 0;
}
