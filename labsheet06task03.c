#include <stdio.h>
int main(){
    int dayofweek;

    printf("enter a number (1-7)for the day of the week:");
    scanf("%d",&dayofweek);

    switch(dayofweek){
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("others day\n");
        break;

    }
return 0;
}
