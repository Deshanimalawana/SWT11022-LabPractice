#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool isRainy = false;
    bool isHoliday = true;
    bool isWeekend = false;

    if(!isRainy && (isHoliday||isWeekend))
    {
        printf("the student can go on a trip\n");
    }
    else{printf("the student can not go on a trip\n");}

    int currentmark = 75;
    int updatemark = currentmark+5 ;
    printf("the student's updated marks: %d\n",updatemark);

    return 0;

}
