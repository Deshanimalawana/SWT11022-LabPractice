#include<stdio.h>
#include<stdbool.h>
int main(){
bool isRainy;
bool isHoliday;
bool isWeekend;

isRainy=false;
isHoliday=true;
isWeekend=true;

bool canGoOnTrip = (!isRainy && (isHoliday||isWeekend));

if (canGoOnTrip){
    printf("The student can go on a trip.\n");
}

else{
        printf("The student can not go on a trip.\n");

}

int marks = 65;
marks+=5;

printf("updated marks: %d\n", marks);
return 0;








}



