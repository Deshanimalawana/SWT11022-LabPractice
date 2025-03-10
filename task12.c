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

    int current_marks=85;
    current_marks+=5;
    printf("Updated marks: %d\n",current_marks);
    return 0;
}
