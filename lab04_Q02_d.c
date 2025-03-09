#include <stdio.h>
#include <stdbool.h>

int main() {

    bool isRainy = false;
    bool isHoliday = true;
    bool isWeekend = false;


    bool canGoOnTrip = (!isRainy) && (isHoliday || isWeekend);

    printf("Is it rainy? %s\n", isRainy ? "Yes" : "No");
    printf("Is it a holiday? %s\n", isHoliday ? "Yes" : "No");
    printf("Is it a weekend? %s\n", isWeekend ? "Yes" : "No");
    printf("Can the student go on a trip? %s\n", canGoOnTrip ? "Yes" : "No");

    return 0;
}
