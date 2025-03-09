#include<stdio.h>


  int isRainy,isHoliday,isWeekend;

int main () {
   isRainy =0;//false
   isHoliday =1;//true
   isWeekend =1; //true



   int (result) = !isRainy && (isHoliday ||isWeekend) ;


   if (result)

        {
            printf( "Can go");
   }
       else
       {
        printf ("cant go");
       }


       return 0;
}

