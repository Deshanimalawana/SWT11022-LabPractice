#include <stdio.h>

int main(){
    int DayOfWeek = 3;

    switch (DayOfWeek){
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
        printf("Other day \n");
    }
    
}