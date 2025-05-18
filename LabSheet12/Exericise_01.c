#include <stdio.h>

int main() {
    // Part a: Declare and initialize variables
    int int_var = 45;
    float float_var = 57.234;
    char char_var = 'A';

    // Part b: Print values
    printf("Values:\n");
    printf("int_var = %d\n", int_var);
    printf("float_var = %.3f\n", float_var);
    printf("char_var = %c\n\n", char_var);

    // Part c: Print addresses
    printf("Addresses:\n");
    printf("int_var address: %p\n", (void*)&int_var);
    printf("float_var address: %p\n", (void*)&float_var);
    printf("char_var address: %p\n\n", (void*)&char_var);

    // Part d: Declare pointers
    int *int_var_pointer;
    float *float_var_pointer;
    char *char_var_pointer;

    // Part e: Initialize pointers
    int_var_pointer = &int_var;
    float_var_pointer = &float_var;
    char_var_pointer = &char_var;

    // Part f: Print pointer variables (addresses they store)
    printf("Pointer values (addresses they point to):\n");
    printf("int_var_pointer = %p\n", (void*)int_var_pointer);
    printf("float_var_pointer = %p\n", (void*)float_var_pointer);
    printf("char_var_pointer = %p\n\n", (void*)char_var_pointer);

    // Part g: Dereference pointers to get values
    printf("Values via dereferencing:\n");
    printf("*int_var_pointer = %d\n", *int_var_pointer);
    printf("*float_var_pointer = %.3f\n", *float_var_pointer);
    printf("*char_var_pointer = %c\n\n", *char_var_pointer);

    // Part h: Pointer arithmetic
    printf("Pointer arithmetic:\n");
    printf("int_var_pointer + 1 = %p\n", (void*)(int_var_pointer + 1));
    printf("float_var_pointer + 1 = %p\n", (void*)(float_var_pointer + 1));
    printf("char_var_pointer + 1 = %p\n", (void*)(char_var_pointer + 1));

    return 0;
}
