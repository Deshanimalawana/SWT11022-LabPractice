#include <stdio.h>
int main(){
    int x = 10, y = 20;

    printf("----PRE INCREMENT EXAMPLE----\n");
    printf("value of x: %d\n", x);
    printf("value of x: %d\n", ++x);
    printf("value of x Incremented : %d\n", x);

    printf("\n----POST INCREMENT EXAMPLE----\n");
    printf("value of y: %d\n", y);
    printf("value of y: %d\n", y++);
    printf("value of Incremented y: %d\n", y);

return 0;
}
