#include <stdio.h>

int main() {
    int x = 5, y = 3;

    int and=x&y;
    int or=x|y;
    int xor=x^y;

    printf("a AND y=%d\n",and);
    printf("a OR y=%d\n",or);
    printf("a XOR y=%d\n",xor);
    return 0;
}
