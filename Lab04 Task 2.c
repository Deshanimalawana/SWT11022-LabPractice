#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool isRainy;
    bool isHoliday;
    bool isWeekend;

    isRainy=true;
    isHoliday=false;
    isWeekend=true;

    bool trip= !isRainy && (isHoliday || isWeekend);

    printf("Is student can go on a trip :%s\n",trip? "yes":"NO" );

    int marks=57;
    marks+=5;
    printf("student mark :%d\n", marks);

    return 0;
}
