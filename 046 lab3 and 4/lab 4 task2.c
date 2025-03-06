#include <stdio.h>
#include <stdbool.h> // Include this header for Boolean support

int main() {
    bool isRainy, isHoliday, isWeekend;


    isRainy = false;
    isHoliday = true;
    isWeekend = false;

    bool canGoOnTrip = !isRainy && (isHoliday || isWeekend);

    printf("Can the student go on the trip? %s\n", canGoOnTrip ? "Yes" : "No");


    int studentMarks = 75; // Current marks
    studentMarks += 5;     // Add 5 marks using the += assignment operator
    printf("Updated student marks: %d\n", studentMarks);

    return 0;
}
