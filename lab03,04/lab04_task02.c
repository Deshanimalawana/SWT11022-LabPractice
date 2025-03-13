#include <stdio.h>

int main() {
    int isRainy = 0, isHoliday = 1, isWeekend = 0;

    // Check if trip can happen
    int canGoTrip = (!isRainy && (isHoliday || isWeekend));

    printf("Can go on trip: %s\n", canGoTrip ? "Yes" : "No");

    // Assignment operator to add 5 marks
    int marks = 40;
    marks += 5;
    printf("Updated marks: %d\n", marks);

    return 0;
}
