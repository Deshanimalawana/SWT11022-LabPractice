#include<stdio.h>

int main(){

int a = 88, b = 845, c = 782;

int largest = (a > b) ? ((a > c) ? a  : c) : ((b > c) ? b : c);
printf("The largest number is : %d\n\n", largest);

int average = (a+b+c)/3;
printf("The Average is %d", average);
return 0;

}




/*
----------- Testing --------------------------
{
    int a,b,c;
printf("Enter your first number: ");
scanf("%d", &a);
printf("Enter your second number: ");
scanf("%d", &b);
printf("Enter your third number: ");
scanf("%d", &c);

int largeVal = (a > b) ? printf("a is the larger number: %d", a) : (c > a) ? printf("c is the largest number: %d", c) : printf("b is the larger number: %d", b);
or
int largest = (a > b) ? ((a > c) ? a  : c) : ((b > c) ? b : c);
}

*/
