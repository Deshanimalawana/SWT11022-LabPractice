#include <stdio.h>
#include <stdbool.h>
int main (){
    bool israiny_day = false;
    bool isholiday = true;
    bool isweekend = false;

    bool can_go_trip = (!israiny_day && (isholiday || isweekend));
    printf("Can student go trip? %s \n",can_go_trip ? "Yes":"No");

int mark =70;
mark += 5;
printf("Updated mark: %d \n",mark);

    return 0;
}