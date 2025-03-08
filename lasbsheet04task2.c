#include <stdio.h>
#include <stdbool.h> 

int main() {
    bool isRainy, isHoliday, isWeekend;

    isRainy = false;    
    isHoliday = true;   
    isWeekend = false;  

    bool can_go_trip = !isRainy && (isHoliday || isWeekend);
    printf("can student go trip? %s \n",can_go_trip ?"yes":"no" );


    int currentMarks = 75; 
    currentMarks += 5;    
    printf("The student's updated marks are: %d\n", currentMarks);

    return 0;
}