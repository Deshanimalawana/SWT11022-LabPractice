#include<stdio.h>
#include<stdbool.h>

int main(){

bool isRainy, isHoliday, isWeekend;

isRainy = false;
isHoliday = false;
isWeekend = false;

bool trip = !isRainy && !(isHoliday || isWeekend);

printf("Can students go the trip? %s\n", trip? "yes" : "no");

int marks = 87;
marks+=5;
printf("Updated marks is %d", marks);

return 0;
}
