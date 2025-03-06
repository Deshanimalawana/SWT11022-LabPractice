#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value =6;
    char result = (value % 2 == 0) ? 'E':'O';

    printf("Value is %c (E: Even, O: Odd)\n", result);

    return 0;
}
