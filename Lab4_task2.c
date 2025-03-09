#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isRainy, isHoliday, isWeekend;

    isRainy = false;
    isHoliday = true;
    isWeekend = true;

    bool canGoTrip = (!isRainy && (isHoliday || isWeekend));
    printf("Students can go a trip: %s\n", canGoTrip ? "Yes" : "No");

    int currentMarks = 80;
    currentMarks +=5;
    printf("Student's marks: %d\n", currentMarks);

    return 0;

}