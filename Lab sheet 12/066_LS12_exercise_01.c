#include <stdio.h>  

int main() {    
    int int_var = 45;  
    float float_var = 57.234;  
    char char_var = 'A';  

    printf("Values:\n");  
    printf("int_var: %d\n", int_var);  
    printf("float_var: %.3f\n", float_var);  
    printf("char_var: %c\n\n", char_var);  

    printf("Addresses:\n");  
    printf("int_var: %p\n", (void*)&int_var);  
    printf("float_var: %p\n", (void*)&float_var);  
    printf("char_var: %p\n\n", (void*)&char_var);  
 
    int *int_ptr = &int_var;  
    float *float_ptr = &float_var;  
    char *char_ptr = &char_var;  

    printf("Pointer addresses:\n");  
    printf("int_ptr: %p\n", (void*)int_ptr);  
    printf("float_ptr: %p\n", (void*)float_ptr);  
    printf("char_ptr: %p\n\n", (void*)char_ptr);  

    printf("Dereferenced values:\n");  
    printf("*int_ptr: %d\n", *int_ptr);  
    printf("*float_ptr: %.3f\n", *float_ptr);  
    printf("*char_ptr: %c\n\n", *char_ptr);  

    printf("After adding 1 to pointers:\n");  
    printf("int_ptr + 1: %p\n", (void*)(int_ptr + 1));  
    printf("float_ptr + 1: %p\n", (void*)(float_ptr + 1));  
    printf("char_ptr + 1: %p\n", (void*)(char_ptr + 1));  

    return 0;  
}  