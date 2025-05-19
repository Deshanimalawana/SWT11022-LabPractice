#include <stdio.h>

int main() {
    // a) Declare and initialize variables
    int int_var = 45;
    float float_var = 57.234f;
    char char_var = 'A';

    // b) Print the values
    printf("int_var = %d\n", int_var);
    printf("float_var = %.3f\n", float_var);
    printf("char_var = %c\n", char_var);

    // c) Print addresses of variables
    printf("Address of int_var = %p\n", (void*)&int_var);
    printf("Address of float_var = %p\n", (void*)&float_var);
    printf("Address of char_var = %p\n", (void*)&char_var);

    // d) Declare pointers
    int *int_var_pointer;
    float *float_var_pointer;
    char *char_var_pointer;

    // e) Initialize pointers
    int_var_pointer = &int_var;
    float_var_pointer = &float_var;
    char_var_pointer = &char_var;

    // f) Print pointer values (i.e., the addresses they hold)
    printf("int_var_pointer = %p\n", (void*)int_var_pointer);
    printf("float_var_pointer = %p\n", (void*)float_var_pointer);
    printf("char_var_pointer = %p\n", (void*)char_var_pointer);

    // g) Print values using dereferencing
    printf("*int_var_pointer = %d\n", *int_var_pointer);
    printf("*float_var_pointer = %.3f\n", *float_var_pointer);
    printf("*char_var_pointer = %c\n", *char_var_pointer);

    // h) Pointer arithmetic
    printf("int_var_pointer + 1 = %p\n", (void*)(int_var_pointer + 1));
    printf("float_var_pointer + 1 = %p\n", (void*)(float_var_pointer + 1));
    printf("char_var_pointer + 1 = %p\n", (void*)(char_var_pointer + 1));

    return 0;
}

