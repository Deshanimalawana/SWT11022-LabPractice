#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10, y=15,r;

    printf("x is:%d, y is:%d, r is:%d\n", x,y,r);

    r= x&&y;
    printf("x and y is:%d\n",r);

    r= x||y;
    printf("x or y is:%d\n",r);

    r= x^y;
    printf("x xor y is:%d\n",r);




    return 0;
}
