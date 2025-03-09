#include <stdio.h>
int main ()
{
   int a=10 , b= 20 ,c=30;
   int sum =a+b+c;
   float average = sum/3;
   int Largestnumber = (a>b) ? printf("a is the largest number : %d\n",a):
                       (c>a)? printf("c is the largest number:%d\n",c) :
                        printf("b is the largest number:%d\n",b);
   printf("\naverage is :%.2f",average);
   return 0;


}

