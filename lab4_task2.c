#include<stdio.h>
int main(){

//Declare variables
    int isRainy,isHoliday,isWeekend;
//Assign Boolean values
    isRainy=0;
    isHoliday=1;
    isWeekend=0;
//Logical operators
    printf("The student can go on a trip? %s\n",(!isRainy&&(isHoliday||isWeekend))?"Yes":"No");
//assignment operators to updated marks
    int marks=70;
    marks+=5;
    printf("Updated marks: %d\n",marks);

return 0;
}
