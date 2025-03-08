#include <stdio.h>
#include <stdbool.h>

int main() {

    bool isRainy, isHoliday, isWeekend;


    isRainy = false;
    isHoliday = true;
    isWeekend = false;


    printf("The student go on a trip:%s\n", (!isRainy && (isHoliday || isWeekend))? "can" : "cannot");

    return 0;

}

