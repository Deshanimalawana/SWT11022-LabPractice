#include <stdio.h>
int main(){
    int isRainy = 0;
    int isHoliday = 1;
    int isWeekend = 0;

    int result = (!isRainy) && (isHoliday || isWeekend);
    printf("Can the student go on a trip?: %s\n",result ? "yes":"no");

    int marks = 50;
    marks +=5;
    printf("updated marks:%d\n",marks);

    return 0;
}

