#include <stdio.h>

int main() {

   int x=10, y=4;
   int isgreaterthan= (x>y);
   int isequal= (x==y);
   int isnotequal= (x!=y);

   printf("Is x greater than y? %s\n",isgreaterthan ? "yes" : "no" );
   printf("Is x equal to y? %s\n",isequal ? "yes" : "no");
   printf("Is x not equal to y? %s\n",isnotequal ? "yes" : "no");

   return 0;


}
