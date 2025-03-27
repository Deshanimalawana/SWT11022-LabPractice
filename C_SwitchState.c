#include <stdio.h>
int main(){

 int dayofweek;

  printf("Day of Week:");
  scanf("%i",&dayofweek);

 switch(dayofweek){

   case 1:
       printf("Monday\n");
       break;

   case 2:
       printf("Tuesday\n");
       break;
   case 3:
       printf("Wensday\n");
       break;
   case 4:
       printf("Thursday\n");
       break;
   case 5:
       printf("Friday\n");
       break;
   default:
       printf("Not value day\n");
  }



  return 0;
}
