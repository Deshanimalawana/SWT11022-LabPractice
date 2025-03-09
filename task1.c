#include<stdio.h>
int main(){

   int a=50;
   int b=150;
   int c=60;

   int largest =(a>b && a>c)?a : (b>c)?b :c;

   printf("The largest number is: %d\n", largest);

   float avg=(a+b+c)/3;
   printf("average : %.2f\n" , avg);


return 0;
}
