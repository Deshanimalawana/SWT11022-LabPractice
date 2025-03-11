#include<stdio.h>
int main()
{
    int a = 20;
    int b = 40;
    int c = 30;

    int largest = (a>b && a>c) ? a : (b>c ? b:c);
   printf("the largest number: %d\n",largest);

   int average = (a+b+c) / 3;
   printf("the average of the three number: %d\n",average);

   return 0;
}
