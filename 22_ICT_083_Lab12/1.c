#include<stdio.h>
int main(){
 int a=5;
 int *p;
 p=&a;

 printf("Value Of a: %d\n",a);
 printf("Address Of a: %p\n",(void*)&a);
 printf("Value Of p(address of a): %p\n",(void*)p);
 printf("Value Pointed by p: %d\n",*p);

 return 0;


}
