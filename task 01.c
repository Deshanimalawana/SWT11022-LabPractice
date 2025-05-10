#include<stdio.h>
int main () {

int A=10;
int B=20;
int C=30;

int largest = (A>B && A>C)?A : (B>C)?B : C;
printf("largest number:%d\n" ,largest);

float average=(A+B+C)/3;
printf("Average: %.2f\n",average);

return 0;
}
