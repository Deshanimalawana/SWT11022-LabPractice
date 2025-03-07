#include <stdio.h>

int main() {

    int isRainy = 1;
    int isHoliday = 0;
    int isWeekend = 1;


    if (!isRainy && (isHoliday || isWeekend)) {
        printf("The student can go on a trip!\n");
    } else {
        printf("The student cannot go on a trip.\n");
    }


    int currentMarks = 75;
    currentMarks += 5;


    printf("Updated marks: %d\n", currentMarks);

    return 0;
}
