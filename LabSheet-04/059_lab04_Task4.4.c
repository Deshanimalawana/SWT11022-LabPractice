#include<stdio.h>
#include<stdbool.h>
int main(){
    bool isRainy = false;
    bool isHoliday = true;
    bool isWeekend = true;

    bool canGoOnTrip = !isRainy && (isHoliday || isWeekend);
    printf("Can the student go on a trip? %s\n",canGoOnTrip? "Yes":"No");

    int studentMarks = 75;
    studentMarks += 5;

    printf("Updated student marks: %d\n",studentMarks);
    return 0;
}
