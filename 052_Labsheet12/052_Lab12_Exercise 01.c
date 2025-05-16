#include <stdio.h>
int main(){
    int int_var=45;
    float Float_var = 57.234;
    char char_var ='A';

    int *p1;
    int *p2;
    int *p3;

    p1 =&int_var;
    p2 =&Float_var;
    p3 =&char_var;

    printf("The value of int_var is : %d\n",int_var);
    printf("The Address of int_var is : %p\n",(void*)p1);
    printf("The Value of Float_var is :.%3f\n",Float_var);
    printf("The Address of Float_Vvar is :%p\n",(void*)p2);
    printf("The value of char_var is:%d\n",char_var);
    printf("The Address of char_var is :%p",(void*)p3);

    return 0;




}
