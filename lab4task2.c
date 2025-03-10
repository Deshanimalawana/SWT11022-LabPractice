#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isRainy = false, isHoliday = false, isWeekend = true;
    bool GoTrip = (!isRainy && (isHoliday || isWeekend));
    printf("Can student go on a trip? %s\n", GoTrip ? "Yes" : "No");
    int mark = 78;
    mark += 5;
    printf("Updated mark: %d\n", mark);

    return 0;
}
