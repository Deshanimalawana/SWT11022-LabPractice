#include <stdio.h>
int main(){
    int  a =15;
    int b =20;
    int c =45;

    int largest_number = (a>b)?((a>c)?a:c) : ((b>c)?b:c);
    float average = (a+b+c)/3.0;

       printf("The largest number is :%d \n",largest_number);
       printf("Average is : %.2f\n",average);
return 0; 
}