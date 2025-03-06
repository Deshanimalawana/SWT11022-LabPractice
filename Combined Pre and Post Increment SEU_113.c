#include<stdio.h>
int main()
{
     int x = 10,sum =34;

    printf("Initial x: %d\n",x);
    ++x;
    printf("After pre-Increment: %d\n", x);
    ++x;

    sum += x;
    printf("sum: %d\n", sum);

    x++;
    x++;
    printf("Final x: %d\n",x);
    printf("Final sum: %d\n",sum);

    return 0;
}
