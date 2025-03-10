#include <stdio.h>

int main() {
    int isRainy = 0, isHoliday = 1, isWeekend = 0;
    int GoTrip = (!isRainy) && (isHoliday || isWeekend);

    printf("Can go to the trip? %s\n",GoTrip ? "Yes" : "No");

    int marks = 80;
    marks += 5;
    printf("Updated Marks: %d\n", marks);

    return 0;
}
