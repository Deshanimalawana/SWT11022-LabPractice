#include <stdio.h>
#include <stdbool.h>

int main()
{
  bool isRainy,isHoliday,isWeekend;
  isRainy = false;
  isHoliday = true;
  isWeekend = true;

  bool CanGoOnTrip = (!isRainy && (isHoliday || isWeekend));

  printf("can the student go on a trip ?%s\n",CanGoOnTrip? "Yes":"No");
  return 0;
}
