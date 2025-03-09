#include <stdio.h>
#include <stdbool.h>

int main() {

    bool isRainy = true;
    bool isHoliday = false;
    bool isWeekend = true;


    bool canGoOnTrip = (isHoliday || isWeekend) && !isRainy;


    printf("isRainy: %s\n", isRainy ? "true" : "false");
    printf("isHoliday: %s\n", isHoliday ? "true" : "false");
    printf("isWeekend: %s\n", isWeekend ? "true" : "false");
    printf("Can go on a trip: %s\n", canGoOnTrip ? "true" : "false");

    return 0;
}
