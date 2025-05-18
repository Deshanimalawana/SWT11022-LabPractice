#include <stdio.h>

int main() {
    int int_var = 45;
    float float_var = 57.234;
    char char_var = 'A';

    printf("Original Values--->\n");
    printf("\tint_var = %d\n\tfloat_var = %.3f\n\tchar_var = %c\n\n", int_var, float_var, char_var);

    int *int_var_pointer;
    float *float_var_pointer;
    char *char_var_pointer;

    int_var_pointer = &int_var;
    float_var_pointer = &float_var;
    char_var_pointer = &char_var;

    printf("Pointer Variables Values--->\n");
    printf("\t*int_var_pointer = %d\n\t*float_var_pointer = %.3f\n\t*char_var_pointer = %c\n", *int_var_pointer, *float_var_pointer, *char_var_pointer);

    printf("\nAddresses of Variables--->\n");
    printf("\t&int_var = %p\n\t&float_var = %p\n\t&char_var = %p\n", &int_var, &float_var,&char_var);


    printf("\nArithmetic Operations with Pointers--->\n");

    printf("\tint_var_pointer + 1 = %d\n", *int_var_pointer+1);
    printf("\tfloat_var_pointer + 1 = %.3f\n", *float_var_pointer+1);
    printf("\tchar_var_pointer + 1 = %c\n", *char_var_pointer+1);


    printf("\nPointer Variables --->\n");
    printf("\t*int_var_pointer = %p\n\t*float_var_pointer = %p\n\t*char_var_pointer = %p\n", *int_var_pointer, *float_var_pointer, *char_var_pointer);

    return 0;
}
