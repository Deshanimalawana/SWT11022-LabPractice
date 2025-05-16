#include <stdio.h>

int main(){
        int a =5;
        int *p;


        p= &a;

        printf("Value of a is : %d\n",a);
        printf("Address of  a :%p\n",(void*)&a);
        printf("Adress of a : %p\n",(void*)p);
        printf("Value pointed to by a p :%d",*p);

        return 0;


}
