#include <stdio.h>

int add(int a,int b) {
return a+b;
}

int main() {

int x=3,y=4;
int sum=add(x,y);
printf("%d + %d = %d\n",x,y,sum);

return 0;
}
