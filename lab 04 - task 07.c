#include <stdio.h>
int main (){

    int x = 10;
    int y = 20;

    printf("----pre increment example----\n");
    printf("Value of x: %d\n", x);
    printf("Value of x: %d\n", ++x);
    printf("Value of x incremented: %d\n", x);

    printf("----post increment example----\n");
    printf("Value of x: %d\n", y);
    printf("Value of x: %d\n", y++);
    printf("Value of incremented y: %d\n", y);

    return 0;



}
