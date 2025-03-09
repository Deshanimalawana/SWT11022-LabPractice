#include <stdio.h>
#include <stdbool.h>

int main() {
    // Declare Boolean variables
    bool isRainy = false,
    isHoliday = true,
    isWeekend = false;

    // Logical condition for going on a trip
    bool canGoOnTrip = !isRainy && (isHoliday || isWeekend);

    // Display the result
    printf("Can the student go on a trip? %s\n", canGoOnTrip ? "Yes" : "No");

    // Assignment operator
    int studentMarks = 75;
    studentMarks += 5;
    printf("Updated student marks: %d\n", studentMarks);

    return 0;
}
