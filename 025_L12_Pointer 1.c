#include <stdio.h>
int main()
{
    int a = 5;
    int *p;

    p= &a; // p now points to a

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);
    printf("Value of p (address of a): %p\n", (void*)p);
    printf("Value pointed to by p: %d\n", *p); //derefencing

    return 0;
}
