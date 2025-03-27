#include <stdio.h>
int main(){
   int DayOfWeek;

    printf("Enter a day number :");
    scanf("%d",&DayOfWeek);

    switch (DayOfWeek){
       case 1:
          printf("Monday\n");
          break;
       case 2:
          printf("Tuesday\n");
          break;
       case 3:
          printf("Wednesday\n");
          break;
       default:
          printf("Other day\n");
    }
     return 0;
}
