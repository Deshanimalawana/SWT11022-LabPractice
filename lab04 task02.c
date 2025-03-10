#include<stdio.h>
#include<stdbool.h>
int main(void){

    bool isRainy = false;
    bool isHoliday = true;
    bool isWeekend = false;

    bool canGoTrip = !isRainy &&(isHoliday || isWeekend);

    if (canGoTrip){
        printf("The student can go on a trip\n");
    }
    else{
         printf("The student cannot on a trip\n");
    }
    int currentmarks=80;
    currentmarks+=5;
    printf("updated marks:%d\n",currentmarks);
    return 0;
}
