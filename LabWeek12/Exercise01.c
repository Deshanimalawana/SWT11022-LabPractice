#include <stdio.h>
int main(){
    int int_var = 45;
    float float_var = 57.234;
    char char_var = 'A';

    printf("int_var = %d\n", int_var);
    printf("Float_var = %f\n", float_var);
    printf("char_var = %c\n", char_var);

    printf("int_var pointer = %p\n", &int_var);
    printf("Float_var pointer = %p\n", &float_var);
    printf("char_var pointer = %p\n", &char_var);

    int *int_pointer = &int_var;
    float * float_pointer = &float_var;
    char *char_var_pointer = &char_var;

    printf("int_pointer = %p\n", int_pointer);
    printf("Float_pointer = %p\n", float_pointer);
    printf("char_pointer = %p\n", char_var_pointer);

    printf("int_var = %d\n", *int_pointer);
    printf("Float_var = %f\n", *float_pointer);
    printf("char_var = %c\n", *char_var_pointer);

    printf("int_var + 1 = %p\n", int_pointer+1);
    printf("float_var + 1 = %p\n", float_pointer+1);
    printf("char_var + 1 = %p\n", char_var_pointer+1);
}
