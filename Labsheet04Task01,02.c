#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isRainy = false, isHoliday = true, isWeekend = false;
    bool canGoOnTrip = (!isRainy && (isHoliday || isWeekend));
    printf("Can the student go on a trip? %s\n", canGoOnTrip ? "Yes" : "No");
    int marks = 75;
    marks += 5;
    printf("Updated marks: %d\n", marks);
    return 0;
}

