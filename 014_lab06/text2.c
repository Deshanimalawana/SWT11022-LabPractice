#include <stdio.h>
int main(){

    int dayofweek;
    printf("Enter Day Of Week :");
    scanf("%d",&dayofweek);

    switch(dayofweek){

    case 1:
        printf("Monday \n");
        break;
    case 2:
        printf("Tuesday \n");
        break;
    case 3:
        printf("Wednesday \n");
        break;
    default:
        printf("other day \n");
        break;
    }
    return 0;


}
