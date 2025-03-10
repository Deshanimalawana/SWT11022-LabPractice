#include <stdio.h>

int main()
{
    int x= 6;
    int y= 10;

    printf("Pre increment of x\n");       // pre increment of x
    printf("Value of x: %d\n", x);
    printf("Value of x: %d\n", ++x);
    printf("Value of x Incremented : %d\n", x);



    printf("\n\nPre increment of y\n");       //pre increment of y
    printf("Value of y: %d\n", y);
    printf("Value of y: %d\n", ++y);
    printf("Value of y Incremented: %d\n", y);



    printf("\n\nPost increment of x\n");      //post increment of x
    printf("Value of x: %d\n", x);
    printf("Value of x: %d\n", x++);
    printf("Value of x Incremented: %d\n", x);


    printf("\n\nPost increment of y\n");    //post increment of y
    printf("Value of y: %d\n", y);
    printf("Value of y: %d\n", y++);
    printf("Value of y Incremented: %d\n", y);



    printf("\n\nPre decrement of x\n");     //pre decrement of y
    printf("Value of x: %d\n", x);
    printf("Value of x: %d\n", --x);
    printf("Value of x decremented: %d\n", x);


    printf("\n\nPre decrement of y\n");     //pre decrement of y
    printf("Value of y: %d\n", y);
    printf("Value of y: %d\n", --y);
    printf("Value of y decremented: %d\n", y);


    printf("\n\nPost decrement of x\n");        //post decrement of x
    printf("Value of x: %d\n", x);
    printf("Value of x: %d\n", x--);
    printf("Value of x decremented: %d\n",x);


    printf("\n\nPost decrement of y\n");        //post decrement of y
    printf("Value of y: %d\n", y);
    printf("Value of y: %d\n",y--);
    printf("Value of y decremented: %d\n",y);










}
