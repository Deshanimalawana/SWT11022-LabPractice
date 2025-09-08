#include <stdio.h>

int main() {
    // Step 1: Declare boolean variables (0 for false, 1 for true)
    int isRainy = 0, isHoliday = 1, isWeekend = 0;

    // Step 2: Use logical operators to check if a trip can happen
    int canGoTrip = (!isRainy) && (isHoliday || isWeekend);

    // Step 3: Print the result
    printf("Can the student go on the trip? %s\n", canGoTrip ? "Yes" : "No");

    // Step 4: Use assignment operator to update marks
    int marks = 50;
    marks += 5; // Add 5 marks

    // Print updated marks
    printf("Updated marks: %d\n", marks);

    return 0;
}
