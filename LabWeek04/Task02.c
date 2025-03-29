#include <stdio.h>
#include <stdbool.h>
int main() {

    bool isRainy, isHoliday, isWeekend;


    isRainy = false;
    isHoliday = true;
    isWeekend = false;


    bool canGoOnTrip = (!isRainy && (isHoliday || isWeekend));


    if (canGoOnTrip)
        printf("The student can go on a trip.\n");
    else
        printf("The student cannot go on a trip.\n");


    int marks = 75;
    marks += 5;
    printf("Updated marks: %d\n", marks);

    return 0;
}
