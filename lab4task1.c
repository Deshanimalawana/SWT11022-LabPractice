#include <stdio.h>
int main () {

int A = 4;
int B = 8;
int C = 5;

int largest = (A>B && A>C)?A : (B>C)?B : C;
printf("largest number:%d\n" ,largest);
float average = (A+B+C)/3;
printf("Average: %.2f\n",average);

 return 0;
}
