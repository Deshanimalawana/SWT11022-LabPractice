#include <stdio.h>
int main() {
    int isRainy = 0;
    int isHoliday = 1;
    int isWeekend = 0;
    if (!isRainy && (isHoliday || isWeekend)) {
        printf("You can go on the trip!\n");
    } else {
        printf("You cannot go on the trip.\n");
    }
    int currentMarks = 80;
    currentMarks += 5;
    printf("Updated marks: %d\n", currentMarks);
    return 0;
}
