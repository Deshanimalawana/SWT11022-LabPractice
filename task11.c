#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool isRainy, isHoliday, isWeekend;
     isRainy=false;
     isHoliday=true;
     isWeekend=false;

    if(!isRainy && (isHoliday || isWeekend)){
        printf("The student go on a trip\n");

    }else{
    printf("The students cannot go on a trip\n");
    }
    return 0;
}
