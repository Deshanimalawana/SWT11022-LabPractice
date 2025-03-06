#include <stdio.h>
int main () {
   int X = 10, Y= 4;
   int isGreaterthan = (X>Y);
   int isEqual = (X==Y);
   int isNotEqual = (X != Y);

   printf("Is X greater than Y? %s\n",isGreaterthan ? "Yes": "No");
   printf ("Is X is equal to Y? %s\n",isEqual ? "Yes":"No");
   printf ("Is X is Not Equal to Y? %s\n",isNotEqual ? "Yes":"No");

   return 0;



}
