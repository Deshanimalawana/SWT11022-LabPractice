#include <stdio.h>

int main() {
    int isRainy = 0;  //  false
    int isHoliday = 1; //  true
    int isWeekend = 0; //  false

    int canGoOnTrip = (!isRainy) && (isHoliday || isWeekend);

    if (canGoOnTrip) {
        printf("The student can go on the trip.\n");
    } else {
        printf("The student cannot go on the trip.\n");
    }

    int marks = 80;
    marks += 5;

    printf("Updated marks: %d\n", marks);

    return 0;
}
