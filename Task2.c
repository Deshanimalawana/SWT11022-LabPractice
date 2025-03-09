#include <stdio.h>
#include <stdbool.h>  // Include this header to use Boolean variables in C

int main() {
    // a. Declare three Boolean variables
    bool isRainy, isHoliday, isWeekend;

    // b. Assign values to the Boolean variables
    isRainy = false;   // false means it's not raining
    isHoliday = true;  // true means it's a holiday
    isWeekend = false; // false means it's not the weekend

    // c. Use logical operators to check if the student can go on a trip
    bool canGoOnTrip = (!isRainy && (isHoliday || isWeekend));

    // d. Display the result
    printf("Can the student go on a trip? %s\n", canGoOnTrip ? "Yes" : "No");

    // e. Use assignment operators to add 5 marks to current marks
    int marks = 80;  // Assume the student has 80 marks
    marks += 5;      // Add 5 marks

    // Display the updated marks
    printf("Updated Marks: %d\n", marks);

    return 0;
}
