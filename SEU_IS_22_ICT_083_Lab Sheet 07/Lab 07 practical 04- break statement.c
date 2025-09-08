#include <stdio.h>
int main () {
   int firstEven=0;
   for (int i=1;;i++)
   {
       if (i%2==0){
       firstEven=i;
       break;
   }
   }
    printf("The First Even number is: %d",firstEven);
return 0;
}
