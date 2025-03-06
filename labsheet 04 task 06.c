#include<stdio.h>
int main(){
int x=12;
int y=6;
int andResult=x&y;
int orResult=x|y;
int xorResult=x^y;
int notResult=~x;
int leftshift=x<<2;
int rightshift=y>>1;
printf("AND Result: %d\n",andResult);
printf("orResult:%d\n",orResult);
printf("xorResult:%d\n",xorResult);
printf("notResult:%d\n",notResult);
printf("leftshift result:%d\n",leftshift);
printf("rightshift result:%d\n",rightshift);
return 0;
}
