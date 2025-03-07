#include <stdio.h>
int main () {
int a= 10;
int b=15;
int c=20;

int largevalue= (a>b>c)?
  printf("large value is %d\n",a)
  :

  (b>a>c)?
  printf("large value is %d\n",b)
  :

  printf("large value is %d\n",c);
  return 0;

}
