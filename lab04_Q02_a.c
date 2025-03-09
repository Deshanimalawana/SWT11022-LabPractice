#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isRainy = true;
    bool isHoliday = false;
    bool isWeekend = true;

    printf("Is it rainy? %s\n", isRainy ? "Yes" : "No");
    printf("Is it a holiday? %s\n", isHoliday ? "Yes" : "No");
    printf("Is it a weekend? %s\n", isWeekend ? "Yes" : "No");

    return 0;
}
