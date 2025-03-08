#include<stdio.h>
int main () {
   int isRainy =0; //false
   int isHoliday =1; //true
   int isWeekend =1; //true

   char result1 = ~isRainy && isHoliday  ;
   char result2 = ~isRainy || isWeekend  ;

   printf("result1 is %s\n",result1 ? "True" :"False");
   printf("result2 is %s\n",result2  ? "True" :"False");

   int studentmarks= 85;
   studentmarks +=5;
   printf("student marks is %d\n",studentmarks);

   return 0;
}
