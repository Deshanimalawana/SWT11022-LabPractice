#include <stdio.h>

int main ()
{

    int Value = 6;
    char result = (Value %2 == 0) ? 'E': 'O';
    printf("Value is %c (E: Even, O: Odd)\n", result);

    return 0;


}
