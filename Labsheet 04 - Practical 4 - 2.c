#include <stdio.h>

int main() {

    int x = 10, y = 20;

    printf("----PRE INCREMENT EXAMPLE----\n");
    printf("Value of x: %d\n", x);
    printf("Value of x: %d\n", --x);
    printf("Value of x Decremented: %d\n", x);

    printf("\n----POST INCREMENT EXAMPLE----\n");
    printf("Value of y: %d\n", y);
    printf("Value of y: %d\n", y--);
    printf("Value of Decremented y: %d\n", y);

    return 0;
}
