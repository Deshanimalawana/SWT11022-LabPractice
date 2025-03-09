#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isRainy = false;
    bool isHoliday = true;
    bool isWeekend = false;

    bool GoOnTrip = (!isRainy && (isHoliday || isWeekend));
        printf("Can the student go on a trip? %s\n", GoOnTrip ? "Yes" : "No");

    int currentmarks = 46;
    currentmarks  += 5;
    printf("Updated marks: %d\n", currentmarks);
    return 0;
}
