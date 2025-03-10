#include<stdio.h>
#include<stdbool.h>
int main(){
 bool isRainy;
 bool isHoliday;
 bool isWeekend;

 isRainy = false;
 isHoliday=true;
 isWeekend=true;

 bool canGoOnTrip = (!isRainy && (isHoliday||isWeekend));
 printf("The student can go on a trip\n ");

 int marks = 55;
 marks+=5;
 printf("Update marks: %d\n",marks);
  return 0;




}
