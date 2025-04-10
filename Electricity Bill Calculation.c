#include <stdio.h>

int main() {
   float bill=0.0;
   float unit=56.5;


   if (unit<=50){
    bill=unit*0.5;
   }

   else if(unit<=100){
        bill=(unit-50)*0.75+0.5*50;

   }
    else if(unit<=200){
        bill=(unit-100)*1.2 + 0.5*50 + 100*0.75;
    }

    else{
        bill=(unit-250)*1.5 + 0.5*50 + 100*0.75+100*1.2;
    }
    printf("%2f",bill);




    return 0;
}
