#include<stdio.h>

int main(){

int a = 50;
int b = 100;
int c = 150;

int largest = (a > b) ? ((a > c) ? a  : c) : ((b > c) ? b : c);
printf("The largest number : %d\n\n", largest);

int average = (a+b+c)/3;
printf("The Average is :%d", average);
return 0;

}
