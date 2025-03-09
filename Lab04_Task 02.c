#include <stdio.h>
#include <stdbool.h>
int main(){
    //Declare Boolean variables
    bool isRainy = false;
    bool isHoliday = true;
    bool isWeekend = false;

    //Logical operators
    bool canGoOnTrip = !isRainy && (isHoliday || isWeekend);

    //Display result
    printf("Can the student go on a trip? %s\n", canGoOnTrip ? "Yes" : "No");

    //Assignment operator
    int studentMarks = 65;
    studentMarks += 5;
    printf("Updated student marks : %d\n",studentMarks);

    return 0;

}
