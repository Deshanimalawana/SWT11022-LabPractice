#include <stdio.h>

int main () {

    int int_var = 45;
    float float_var = 57.234;
    char char_var = 'A';

    int *int_var_pointer;
    float *float_var_pointer;
    char *char_var_pointer;

    int_var_pointer = &int_var;
    float_var_pointer = &float_var;
    char_var_pointer = &char_var;

    printf("Value of int_var is: %d\n",int_var);
    printf("Value of float_var is: %.3f\n",float_var);
    printf("Value of char_var is: %c\n",char_var);

    printf("\nAddress of int_var (45): %p\n",(void*)&int_var);
    printf("Address of float_var (57.234): %p\n",(void*)&float_var);
    printf("Address of char_var (A): %p\n",(void*)&char_var);

    printf("\nValue of int_var_pointer is: %p\n",(void*)int_var_pointer);
    printf("Value of float_var_pointer is: %p\n",(void*)float_var_pointer);
    printf("Value of char_var_pointer is: %p\n",(void*)char_var_pointer);

    printf("\nValue pointed by pointer1: %d\n",*int_var_pointer);
    printf("Value pointed by pointer2: %.3f\n",*float_var_pointer);
    printf("Value pointed by pointer3: %c\n",*char_var_pointer);

    printf("\nint_var_pointer+1 = %p\n",(void*)int_var_pointer+1);
    printf("float_var_pointer+1 = %p\n",(void*)float_var_pointer+1);
    printf("char_var_pointer+1 = %p\n",(void*)char_var_pointer+1);

    return 0;

}
