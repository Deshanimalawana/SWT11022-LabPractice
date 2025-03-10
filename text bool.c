#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isRainy, isHoliday, isWeekend;  // Corrected variable names
    isRainy = false;
    isHoliday = true;
    isWeekend = false;

    bool canGoTrip = (!isRainy && isHoliday) || isWeekend;  // Corrected logical expression
    printf("Can student go on a trip? %s\n", canGoTrip ? "Yes" : "No");  // Corrected print statement

    int currentMarks = 75;  // Corrected variable name
    currentMarks += 5;      // Corrected increment operation
    printf("The student's updated marks are: %d\n", currentMarks);  // Corrected print statement

    return 0;
}
