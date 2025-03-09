#include <stdio.h>
#include <stdbool.h>
int main(){
  //Declare Boolean Variables
  bool isRainy=false;
  bool isHoliday=true;
  bool isWeekend=false;

  //Logical Operators
  bool CanGoOnTrip=!isRainy && (isHoliday ||isWeekend);

  printf("Can the student go on a trip?%s\n",CanGoOnTrip?"Yes":"No");

  //Assignment Operators
  int studentMarks=80;
  studentMarks +=5;

  printf("Updated student marks:%d\n",studentMarks);

  return 0;
  }
