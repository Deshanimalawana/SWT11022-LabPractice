#include <stdio.h>
#include <stdbool.h>

int main() {
    // Declare Boolean variables
    bool isRainy = false,
    isHoliday = true,
    isWeekend = false;

    // Logical operators
    bool canGoOnTrip = !isRainy && (isHoliday || isWeekend);

    // Display result
    printf("Can the student go on a trip? %s\n", canGoOnTrip ? "Yes" : "No");

    // Assignment operator: Add 5 marks to student’s current marks and display the updated marks
    int studentMarks = 75;
    studentMarks += 5;
    printf("Updated student marks: %d\n", studentMarks);

    return 0;
}
