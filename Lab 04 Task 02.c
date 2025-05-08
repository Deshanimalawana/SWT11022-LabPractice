#include <stdio.h>

int main() {
    int marks = 50;
    int isRainy = 0, isHoliday = 1, isWeekend = 0;

    // Condition for going on a trip
    int canGoTrip = (!isRainy) && (isHoliday || isWeekend);

    // Update marks using assignment operator
    marks += 5;

    // Display results
    printf("Can go on a trip? %s\n", canGoTrip ? "Yes" : "No");
    printf("Updated Marks: %d\n", marks);

    return 0;
}
