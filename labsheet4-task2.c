#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool isRainy = false;
    bool isHoliday = true;
    bool isWeekend = false;

    bool canGoTrip = !isRainy && (!isHoliday || isWeekend);

    printf("Can go on trip: %s\n", canGoTrip ? "true" : "false");

    int currentMarks = 0; // Assuming initial marks are 0
    currentMarks += 5;
    printf("Updated marks: %d\n", currentMarks);

    return 0;
}
