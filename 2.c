#include <stdio.h>

int main() {

   int x=10, y=4;
   int isGreaterThan= (x>y);
   int isEqual = (x==y);
   int isNotEqual= (x!=y);

   printf("Is x greater than y? %s\n", isGreaterThan ? "Yes" : "No");
   printf("Is x equal to y?\n", isEqual ? "Yes" : "NO");
   printf("Is x not equal to y?\n", isNotEqual ? "Yes" : "No");

   return 0;

}
