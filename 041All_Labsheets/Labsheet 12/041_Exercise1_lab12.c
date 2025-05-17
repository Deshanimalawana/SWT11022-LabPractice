#include <stdio.h>

int main()
{
    int int_var = 45;
    float float_var = 57.234;
    char char_var = 'A';

    int *int_var_pointer = &int_var;
    float *float_var_pointer = &float_var;
    char *char_var_pointer = &char_var;

    printf("Normal value...\n");
    printf("%d\n%.3f\n%c\n", int_var, float_var, char_var);
    printf("\n");
    printf("Address of variable...\n");
    printf("%p\n%p\n%p\n", &int_var, &float_var, &char_var);
    printf("\n");
    printf("pointer variable...\n");
    printf("%p\n%p\n%p\n", *int_var_pointer, *float_var_pointer, *char_var_pointer);
    printf("\n");
    printf("values of pointer variables...\n");
    printf("%d\n%.3f\n%c\n", *int_var_pointer, *float_var_pointer, *char_var_pointer);
    printf("\n");
    printf("Arithmetic operation...\n");
    printf("%d\n",*int_var_pointer+1);
    printf("%.3f\n",*float_var_pointer+1);
    printf("%c\n",*char_var_pointer+1);
    return 0;
}
