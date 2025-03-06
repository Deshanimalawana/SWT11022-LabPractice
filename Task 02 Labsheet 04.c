#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x = 10,y = 4;
  int isGreaterThan = (x>y);
  int isequal = (x==y);
  int isNotEqual = (x!=y);

  printf("Is x greater than y? %s\n",isGreaterThan ? "yes": "No");
  printf("Is x equal to y? %s\n",isequal ? "yes": "No");
  printf("Is x not equal to y? %s\n",isNotEqual ? "yes": "No");

  return 0;
}
