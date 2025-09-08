#include<stdio.h>
int main(){
  int x = 10, y = 4;
  int greaterthan = (x > y);
  int equal = (x == y);
  int notequal = (x != y);


  printf("X greater than Y? %s\n",greaterthan ? "Yes" : "No");
  printf("X equal to Y? %s\n",equal ? "Yes": "No");
  printf("X not equal to Y? %s\n",notequal ? "Yes": "No");

  return 0;
}
