#include <stdio.h>
int main(){
    int dayofWeek=3;

    switch (dayofWeek){
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
