#include<stdio.h>
#include<stdbool.h>
int main(){
    bool isRainy = false;
    bool isHoliday = true;
    bool isWeekend = true;

    bool canGoOnTrip = !isRainy && (isHoliday || isWeekend);

    printf("can the student go on a trip? %s\n",canGoOnTrip ? "Yes": "No");
    return 0;
}
