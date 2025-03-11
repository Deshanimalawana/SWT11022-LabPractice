#include <stdio.h>
 int main(){
  int isRainy = 1;
  int isHoliday = 0;
  int isWeekend = 1;
  int trip = !isRainy && isHoliday || isWeekend;

  printf("The Trip will go? %s\n",trip ? "yes" : "No");

  return 0;



 }
