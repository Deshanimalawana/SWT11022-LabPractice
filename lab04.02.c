#include <stdio.h>

  int isRainy, isHoliday, isWeekend;


int main()
{

     isRainy= 1; //true
     isHoliday=0; //false
     isWeekend= 1; //true

    int canGoOnTrip= !isRainy && (isHoliday || isWeekend);

     if (canGoOnTrip)
     {

    printf("Students Can go on trip\n");
    }

    else {
            printf("Students Can not go on a trip\n");
    }

    return 0;


}
