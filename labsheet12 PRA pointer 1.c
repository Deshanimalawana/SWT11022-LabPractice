#include <stdio.h>
int main()
{
    int a=5 ;
    int *p;

    p = &a;

    printf("value of a: %d\n",a);
    printf("address of a: %p\n", (void*)p);
    printf("value pointed to by p: %d\n",*p);

    return 0;
}
