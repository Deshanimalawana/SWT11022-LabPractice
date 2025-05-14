#include <stdio.h>
#include <stdlib.h>

int main()
{
    int int_var =45;
    float float_var = 57.234;
    char char_var = 'A';

    int *int_var_pointers ;
    float *float_var_pointers ;
    char *char_var_pointers;

    int_var_pointers = &int_var;
    float_var_pointers = &float_var;
    char_var_pointers = &char_var;

    printf("After swapping:\n");
    printf("int_var pointers:%d\n",int_var_pointers);
    printf("float_var pointers:%f\n",float_var_pointers);
    printf("char_var pointers:%c\n",char_var_pointers);


    printf("Memory address of int_var_pointer is :%p\n",int_var_pointers);
    printf("Memory address of float_var_pointer is :%p\n",int_var_pointers);
    printf("Memory address char_var_pointer is :%p\n",int_var_pointers);

    printf("int var value :%d\n",int_var);
    printf("int float value :%f\n",float_var);
    printf("int char value :%c\n",char_var);

    printf("Address of int_var :%p\n",&int_var);
    printf("Address of float_var :%p\n",&float_var);
    printf("Address of char_var :%p\n",&char_var);


    return 0;
}
