#include<stdio.h>
int main(){
    int isRainy = 0;
    int isHoliday = 1;
    int isWeekend = 1;

    int studentcangoonatrip =!isRainy&&(isHoliday||isWeekend);
    printf("Student can go on a trip:%s\n",studentcangoonatrip ? "Yes" : "No");

    return 0;
}
