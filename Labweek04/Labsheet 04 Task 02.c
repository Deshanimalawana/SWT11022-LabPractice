#include<stdio.h>
#include<stdbool.h>

int main() {

    bool isRainy = true;
    bool isHoliday = false;
    bool isWeekend = true;

    if (!isRainy && (isHoliday || isWeekend)) {
        printf("Student can go on a trip.\n");
    }else{
        printf("Student cannot go on a trip.\n");
    }

    //Declare current marks

    int currentMarks = 50;
    currentMarks += 5;

    printf("\nCurrent marks : %d\n",currentMarks);

    return 0;
}
