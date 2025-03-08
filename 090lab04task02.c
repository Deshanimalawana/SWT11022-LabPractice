#include <stdio.h>
#include <stdbool.h>
int main (){

    bool isRainy;
    bool isWeekend;
    bool isHoliday;

    isRainy=false;
    isWeekend=true;
    isHoliday=true;

    bool canGoOnTrip = !isRainy && (isHoliday || isWeekend);

    printf("can the student go on a trip? %s\n", canGoOnTrip? "Yes" : "No");

    int marks=60;
    marks+=5;

    printf("\nUpdated mark is %d\n",marks);

return 0;
}
