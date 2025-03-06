#include <stdio.h>
#include <stdbool.h>

int main() {

    bool isRainy = false;
    bool isHoliday = true;
    bool isWeekend = false;

    bool goTrip = !isRainy && (isHoliday || isWeekend);

    printf("Can the student go on a trip? %s\n", goTrip ? "Yes" : "No");

    int currentMarks = 70;
    currentMarks += 5;

    printf("Updated Marks: %d\n", currentMarks);

    return 0;
}
