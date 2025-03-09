#include <stdio.h>  

int main() {  
    int isRainy = 0, isHoliday = 1, isWeekend = 0;  
    int canGoTrip = !isRainy && (isHoliday || isWeekend);  

    printf("Can the student go on the trip? %s\n", canGoTrip ? "Yes" : "No");  

    int marks = 75;  
    marks += 5;
    printf("Updated Marks: %d\n", marks);  

    return 0;  
}  