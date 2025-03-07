#include <stdio.h>
int main() {
   int isRainy = 1;
   int isHoliday = 0;
   int isWeekend = 0;

   int result1 = ~isRainy;
   int result2 = result1 && isHoliday;
   int result3 = result2 || isWeekend;

   printf("%s\n",result3 ?
                "The student can go on a trip"
            :   "The studen can't go on a trip");
    return 0;
}
