#include<stdio.h>

int main() {
    int x = 10;
    int y = 20;

    printf("----PRE DECREMENT EXAMPLE----\n");
    printf("Value of x: %d\n", x);
    printf("Value of x: %d\n", --x);
    printf("Value of x Decremented: %d\n", x);

    printf("\n----POST DECREMENT EXAMPLE----\n");
    printf("Value of y: %d\n", y);
    printf("Value of y: %d\n", y--);
    printf("Value of Decremented y: %d\n", y);

    return 0;
}
