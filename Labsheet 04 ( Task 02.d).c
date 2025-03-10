#include<stdio.h>
#include<stdbool.h>
int main(){

    bool isRainy, isHoliday, isWeekend;

    isRainy = false;
    isHoliday = true;
    isWeekend = false;

    bool canGoOnTrip = (!isRainy && (isHoliday || isWeekend));

    if(canGoOnTrip){
        printf("The student can go on the trip.\n");
    }else{
        ("The student can't go on the trip.\n");
    }

    return 0;
}
