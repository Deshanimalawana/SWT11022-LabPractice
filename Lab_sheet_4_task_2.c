#include<stdio.h>
#include<stdbool.h>

int main()
{
    bool isRainy=0, isHoliday=0, isWeekend=0;
    
    bool can_go_to_trip= !isRainy && (isHoliday || isWeekend);
    printf("Can I go to the trip? \n%s\n", can_go_to_trip ? "YES" : "NO");
    
    int m= 60;
    m += 5;
    printf("New marks: %d", m);
    
    
    return 0;
}