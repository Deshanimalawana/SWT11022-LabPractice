
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isRainy, isHoliday, isWeekend;
    isRainy = false;
    isHoliday = true;
    isWeekend = false;

    bool canGoTrip = (!isRainy && isHoliday) || isWeekend;
    printf("Can student go on a trip? %s\n", canGoTrip ? "Yes" : "No");

    int currentMarks = 75;
    currentMarks += 5;
    printf("The student's updated marks are: %d\n", currentMarks);

    return 0;
}
