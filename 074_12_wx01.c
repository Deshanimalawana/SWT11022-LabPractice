#include<stdio.h>
int main()
{
    //Declare and initialize variables //
    int int_var=45;
    float Float_var=57.2345;
    char Char_var='A';

    //Print the values
    printf("int var: %d\n",int_var);
    printf("float var: %f\n",Float_var);
    printf("char var: %c\n",Char_var);
     printf("\n");

    //Print the address//
    printf("int pointer address: %p\n",int_var);
    printf("float pointer address: %p\n",Float_var);
    printf("char pointer address: %p\n", Char_var);
    printf("\n");

    // Initialize the above pointers
    int *int_var_pointer;
    float *Float_var_poniter;
    char *Char_var_poniter;



    int_var_pointer=&int_var;
    Float_var_poniter=&Float_var;
   Char_var_poniter=&Char_var;

    //print pointer variables.
    printf("\n");
    printf("the poniter for int: %p\n",int_var_pointer);
    printf("the poniter for float: %p\n",Float_var_poniter);
    printf("the poniter for char: %p\n",Char_var_poniter);



    //dereferencing the address by using pointers.
    printf("\n");
    printf("int_var_poniters: %d\n",*int_var_pointer);
    printf("float_var_poniters: %f\n",*Float_var_poniter);
    printf("char_var_poniters: %c\n",*Char_var_poniter);
    printf("\n");

    //arithmetic operatiobns with pointer
    printf("int_var_poniter+1: %p\n", int_var_pointer+1);
    printf("float_var_poniter+1: %p\n", Float_var_poniter+1);
    printf("char_var_poniter+1: %p\n", Char_var_poniter+1);

    return 0;
}
