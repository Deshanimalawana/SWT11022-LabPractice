#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int b = 25;
    int c = 35;

    int largest = (a>b)?(a>c ? a:c):(b>c? b:c);

    printf(" The Largest number is :%d\n",largest);


    return 0;
}
