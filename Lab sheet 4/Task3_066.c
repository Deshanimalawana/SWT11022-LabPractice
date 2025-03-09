#include <stdio.h>

int main()
{
    
    int x = 5, y = 3;

    int a = x & y;
    int b = x | y;
    int c = x ^ y;

    printf("x = %d, y = %d\n", x, y);
    printf("AND : %d & %d = %d\n", x, y, a);
    printf("OR  : %d | %d = %d\n", x, y, b);
    printf("XOR : %d ^ %d = %d\n", x, y, c);

    return 0;
}