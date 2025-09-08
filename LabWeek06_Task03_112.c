#include <stdio.h>
int main (){
    int dayofweek;
    printf("Enter day number: ");
    scanf("%d",&dayofweek);

    switch (dayofweek){
    case 1:
        printf("Monday\n");
        break;

    case 2:
        printf("Tuesday\n");
        break;

    case 3:
        printf("Wednesday\n");
        break;

    default:
        printf("Other day\n");
    }
return 0;
}
