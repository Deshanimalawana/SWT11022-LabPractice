#include<stdio.h>
int main(){
    int isRainy=0;
    int isHoliday=1;
    int isWeekend=1;



int canGoOntrip=(!isRainy &&(isHoliday||isWeekend));

printf("student can go on the trip?%s\n",canGoOntrip?"yes":"NO");
int marks=75;
marks+=5;
printf("Updated marks after adding 5:%d\n",marks);
return 0;
}
