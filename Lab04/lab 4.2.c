#include<stdio.h>

int main (){

    int isRainy = 0;
    int isHoliday = 1;
    int isWeekend = 1;

    int Result = !isRainy && (isHoliday || isWeekend );

    printf("Result : %s\n",Result ? "yes":"no");
}
