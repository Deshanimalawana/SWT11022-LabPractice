#include <stdio.h>
int main(){

    int dayOfWeek = 1;

    switch (dayOfWeek){
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
    default:
        printf("Other day\n");
    }

    return 0;
}
