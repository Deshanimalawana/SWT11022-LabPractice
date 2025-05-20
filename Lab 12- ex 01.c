#include <stdio.h>

int main() {
    int int_var = 45;
    float float_var = 57.234;
    char char_var = 'A';

    printf("Values:\n");
    printf("int_var = %d\n", int_var);
    printf("float_var = %.3f\n", float_var);
    printf("char_var = %c\n", char_var);

    printf("\nAddresses:\n");
    printf("&int_var = %p\n", (void*)&int_var);
    printf("&float_var = %p\n", (void*)&float_var);
    printf("&char_var = %p\n", (void*)&char_var);

    int *int_var_pointer;
    float *float_var_pointer;
    char *char_var_pointer;

    int_var_pointer = &int_var;
    float_var_pointer = &float_var;
    char_var_pointer = &char_var;

    printf("\nPointer values:\n");
    printf("int_var_pointer = %p\n", (void*)int_var_pointer);
    printf("float_var_pointer = %p\n", (void*)float_var_pointer);
    printf("char_var_pointer = %p\n", (void*)char_var_pointer);

    printf("\nDereferenced values:\n");
    printf("*int_var_pointer = %d\n", *int_var_pointer);
    printf("*float_var_pointer = %.3f\n", *float_var_pointer);
    printf("*char_var_pointer = %c\n", *char_var_pointer);

    int_var_pointer++;
    float_var_pointer++;
    char_var_pointer++;

    printf("\nPointer values after increment:\n");
    printf("int_var_pointer = %p\n", (void*)int_var_pointer);
    printf("float_var_pointer = %p\n", (void*)float_var_pointer);
    printf("char_var_pointer = %p\n", (void*)char_var_pointer);

    return 0;
}
