#include <stdio.h>
#include <stdbool.h>

int main() {

    bool isRainy, isHoliday, isWeekend;

    isRainy = false;
    isHoliday = true;
    isWeekend = false;

    bool cangoOnTrip = !isRainy && (isHoliday || isWeekend);
    printf("The student %s go on the trip!\n", cangoOnTrip ? "can" : "cannot");

    int currentMarks = 65;
    currentMarks += 5;

    printf("Updated marks: %d\n", currentMarks);

    return 0;
}
