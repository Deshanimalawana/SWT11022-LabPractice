#include <stdio.h>
int main(){
    int a = 10;
    int *pointer_var;

    pointer_var = &a;

    printf("value of a: %d\n",a);
    printf("Address of a %p\n",(void*)&a);
    printf("value of p(Address of a)%p\n",(void*)pointer_var);
    printf("value of a pointed by p:- %d",*pointer_var);
}
