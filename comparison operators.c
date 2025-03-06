#include<stdio.h>
int main(){

  int x=10,y=4;
  int isGreaterThan=(x>y);
  int isEqual=(x==y);
  int isNotEqual=(x!=y);

  printf("IS x greater than y? %s\n",isGreaterThan?"Yes":"No");
  printf("IS x equal to y?%s\n",isEqual?"Yes":"No");
  printf("IS x not equal to y?%s\n",isNotEqual?"Yes":"No");

  return 0;
  }
