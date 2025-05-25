
#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int int_var = 45;
    float float_var = 57.234;
    char char_var = 'A';

    printf("\nint_var value is %d\n", int_var);
    printf("float_var value is %.3f\n", float_var);
    printf("char_var value is %c\n", char_var);

    printf("\nint_var address is %d\n", &int_var);
    printf("float_var address is %d\n", &float_var);
    printf("char_var address is %d\n", &char_var);

    int *int_var_pointer;
    float *float_var_pointer;
    char *char_var_pointer;

    
    int_var_pointer = &int_var;
    float_var_pointer = &float_var;
    char_var_pointer = &char_var;

    printf("\nint_var_pointer adress is %p\n", int_var_pointer);
    printf("float_var_pointer adress is %p\n", float_var_pointer);
    printf("char_var_pointer adress is %p\n", char_var_pointer);

    printf("\nint_var_pointer value is %d\n", *int_var_pointer);
    printf("float_var_pointer value is %.3f\n", *float_var_pointer);
    printf("char_var_pointer value is %c\n", *char_var_pointer);

    printf("\nint_var_pointer + 1: %d\n", *int_var_pointer + 1);
    printf("float_var_pointer + 1: %.3f\n", *float_var_pointer + 1);
    printf("char_var_pointer + 1: %c\n", *char_var_pointer + 1);

    return 0;

}
