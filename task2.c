#include <stdio.h>
int main(){
    int isRainy, isHoliday, isWeekend;

    isRainy = 0;
    isHoliday = 1;
    isWeekend = 1;

    printf("The student can go on a trip?. %s\n", (!isRainy&&(isHoliday||isWeekend))?"Yes": "No");

    int marks = 70;
    marks +=5;

    printf("Updated marks: %d\n", marks);

    return 0;

}
