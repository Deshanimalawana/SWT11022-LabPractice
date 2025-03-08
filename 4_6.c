#include<stdio.h>
int main(){

int x=12;
int y=6;

int andresult = x&y;
int orresult = x|y;
int xorresult = x^y;
int notresult = ~x;
int leftshift = x<< 2;
int rightshift = y>> 1;

printf("AND result:%d\n",andresult);
printf("OR result:%d\n",orresult);
printf("XOR result:%d\n",xorresult);
printf("NOT result:%d\n",notresult);
printf("LEFT SHIFT result:%d\n",leftshift);
printf("RIGHT SHIFT result:%d\n",rightshift);


return 0;
}
