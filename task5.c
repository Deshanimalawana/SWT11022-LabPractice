#include<stdio.h>
int main(){
//declare variables
    int isRainy,isHoliday,isWeekend;
//Assign Boolean values
    isRainy=0;
    isHoliday=0;
    isWeekend=0;
//Logical operators
    printf("The student can go a trip?: %s\n",(!isRainy&&(isHoliday||isWeekend))?"Yes":"No");
//assignment operators to update marks
    int marks=70;
    marks+=5;
    printf("Update marks: %d\n",marks);

return 0;

}
