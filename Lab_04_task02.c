#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool isRainy,isHoliday,isWeekend;

    isRainy= false;
    isHoliday= true;
    isWeekend= false;

    bool result = ( !isRainy && (isHoliday || isWeekend));

    printf("students you %s go to trip.\n",result? "can":"can't");

    int marks = 10;
    marks += 5;
    printf("students current marks is :%d", marks);

    return 0;
}
