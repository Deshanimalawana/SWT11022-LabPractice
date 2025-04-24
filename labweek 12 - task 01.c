#include <stdio.h>
int main () {

    int a = 5;
    int *p;

    p = &a;

    printf("value of a: %d\n",a);
    printf("Address of a: %p\n",(void*)&a);
    printf("value of p (address of a): %p\n",(void*)p);
    printf("value pointed to by p: %d\n",*p);

    return 0;
}
