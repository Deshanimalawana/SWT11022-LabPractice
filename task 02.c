#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isRainy;
    bool isHoliday;
    bool isWeekend;

     isRainy = false;
     isHoliday = true;
     isWeekend = false;

    bool TRIP = (!isRainy && (isHoliday || isWeekend));
    printf("The student can go on a trip? %s\n", TRIP ? "Yes" : "No");

    int marks =80;
    marks += 5;
    printf("Updated marks: %d\n", marks);

    return 0;
}
