#include <stdio.h>

int main() {
    // a) Declare and initialize variables
    int int_var = 45;
    float float_var = 57.234;
    char char_var = 'A';

    // b) Print the values of int_var, float_var, char_var
    printf("Value of int_var: %d\n", int_var);
    printf("Value of float_var: %f\n", float_var);
    printf("Value of char_var: %c\n", char_var);

    // c) Print the address of above variables
    printf("Address of int_var: %p\n", (void *)&int_var);
    printf("Address of float_var: %p\n", (void *)&float_var);
    printf("Address of char_var: %p\n", (void *)&char_var);

    // d) Declare the pointers
    int *int_var_pointer;
    float *float_var_pointer;
    char *char_var_pointer;

    // e) Initialize the pointers with the address of the respective variables
    int_var_pointer = &int_var;
    float_var_pointer = &float_var;
    char_var_pointer = &char_var;

    // f) Print pointer variables (which hold the addresses)
    printf("Value of int_var_pointer (address of int_var): %p\n", (void *)int_var_pointer);
    printf("Value of float_var_pointer (address of float_var): %p\n", (void *)float_var_pointer);
    printf("Value of char_var_pointer (address of char_var): %p\n", (void *)char_var_pointer);

    // g) Print value of int_var, float_var and char_var by dereferencing the pointers
    printf("Value of int_var : %d\n", *int_var_pointer);
    printf("Value of float_var : %f\n", *float_var_pointer);
    printf("Value of char_var : %c\n", *char_var_pointer);

    // h) Perform arithmetic operations with pointers
    printf("Address of int_var_pointer + 1: %p\n", (void *)(int_var_pointer + 1));
    printf("Address of float_var_pointer + 1: %p\n", (void *)(float_var_pointer + 1));
    printf("Address of char_var_pointer + 1: %p\n", (void *)(char_var_pointer + 1));

    return 0;
}

