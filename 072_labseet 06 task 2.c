#include <stdio.h>
    int main(){
    int dayOfweek=3;
    switch(dayOfweek) {
    case 1:
        printf("Monday\n");
    case 2:
        printf("Tuesday\n");
    case 3:
        printf("Wednesday\n");
        break;
    default:
        printf("Other day\n");
        }
    return 0;
}
