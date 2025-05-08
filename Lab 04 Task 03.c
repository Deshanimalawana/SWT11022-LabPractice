#include <stdio.h>
int main(){
    int x =1;
    int y=1;

    int and = x&&y;
    int or =x||y;
    int xor =x^y;

    printf("Bitwise AND of %d and %d is: %d\n", x, y, and);
    printf("Bitwise OR of %d and %d is: %d\n", x, y, or);
    printf("Bitwise XOR of %d and %d is: %d\n", x, y, xor);

    return 0;
}
