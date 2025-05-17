 #include <stdio.h>

void main() {
    // a) Declare and initialize variables
    int int_var = 45;
    float float_var = 57.234;
    char char_var = 'A';

    // b) Print the values
    printf("Values:\n");
    printf("int_var = %d\n", int_var);
    printf("float_var = %.3f\n", float_var);
    printf("char_var = %c\n\n", char_var);

    // c) Print the addresses
    printf("Addresses:\n");
    printf("&int_var = %p\n", (void*)&int_var);
    printf("&float_var = %p\n", (void*)&float_var);
    printf("&char_var = %p\n\n", (void*)&char_var);

    // d) Declare pointers
    int *int_var_pointer;
    float *float_var_pointer;
    char *char_var_pointer;

    // e) Initialize pointers
    int_var_pointer = &int_var;
    float_var_pointer = &float_var;
    char_var_pointer = &char_var;

    // f) Print pointer variables
    printf("Pointer values (addresses stored in pointers):\n");
    printf("int_var_pointer = %p\n", (void*)int_var_pointer);
    printf("float_var_pointer = %p\n", (void*)float_var_pointer);
    printf("char_var_pointer = %p\n\n", (void*)char_var_pointer);

    // g) Print values by dereferencing
    printf("Dereferenced values:\n");
    printf("*int_var_pointer = %d\n", *int_var_pointer);
    printf("*float_var_pointer = %.3f\n", *float_var_pointer);
    printf("*char_var_pointer = %c\n\n", *char_var_pointer);

    // h) Arithmetic operations with pointers
    printf("Pointer arithmetic:\n");
    printf("int_var_pointer + 1 = %p\n", (void*)(int_var_pointer + 1));
    printf("float_var_pointer + 1 = %p\n", (void*)(float_var_pointer + 1));
    printf("char_var_pointer + 1 = %p\n", (void*)(char_var_pointer + 1));
}
