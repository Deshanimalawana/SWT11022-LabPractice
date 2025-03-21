#include<stdio.h>
int main (){
    int isRainy = 0;
    int isHoliday = 1;
    int isWeekend = 1;

    int CanGoOnTrip =(!isRainy) && (isHoliday || isWeekend);

    printf("Can Student GoOnTheTri?%s\n",CanGoOnTrip? "Ys" : "No");

    return 0;

}
