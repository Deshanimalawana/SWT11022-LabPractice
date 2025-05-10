#include<stdio.h>
int main(){
    int a =10;
    int b =20;
    int c = 30;
    float average;

    average = (a+b+c)/3.0;
    printf("The average of:%d,%d, and %d is:%.2f\n",a,b,c,average);

    return 0;
}
