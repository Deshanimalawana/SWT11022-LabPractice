#include <stdio.h>
#include<stdbool.h>

int main ()
{
    bool isRainy, isHoliday , isWeekend;

    isRainy = false;
    isHoliday = true;
    isWeekend = false;

     if (!isRainy && (isHoliday || isWeekend)) {
        printf("The student can go on the trip.\n");
    } else {
        printf("The student cannot go on the trip.\n");
    }

    int Current_Marks = 85;
    Current_Marks += 5;
    printf("Updated Marks : %d\n",Current_Marks);

      return 0;

}
