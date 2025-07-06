#include <stdio.h>

int main(){
    int a=10;
    int b=20,c;
    int *x = &a;
    int *y = &b;


    c = *x;
    *x = *y;
    *y = c;

    printf("%p",x);
}