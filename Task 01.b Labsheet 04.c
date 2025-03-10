#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a = 10;
   int b = 25;
   int c = 35;
   int largest;

   if (a >= b && a >= c) {

       largest = a;
       }else if (b>=a&&b>=c){
       largest = b;
       }else{
       largest = c;
       }

    printf("The largest number is :%d\n",largest);


    return 0;
}
