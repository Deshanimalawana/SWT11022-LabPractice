#include <stdio.h>
#include <stdlib.h>

int main()
{
     int int_var=45;
     float Float_var=57.234;
     char char_var='A';

     //print the values
     printf("The int_var value is:%d\n",int_var);
     printf("The Float_var value is:%f\n",Float_var);
     printf("The char_var value is:%c\n",char_var);

     //print the address
     printf("The int_var address is:%p\n",&int_var);
     printf("The Float_var address is:%p\n",&Float_var);
     printf("The char_var address is:%p\n",&char_var);

     //Declare the pointer variables
     int *int_var_pointer;
     float *Float_var_pointer;
     char *char_var_pointer;

     //Initialize the value here.
     int_var_pointer=&int_var;
     Float_var_pointer=&Float_var;
     char_var_pointer=&char_var;

     //print pointer variables.
     printf("The int_var_pointer value is:%d\n",*int_var_pointer);
     printf("The Float_var_pointer value is:%f\n",*Float_var_pointer);
     printf("The char_var_pointer value is:%c\n",*char_var_pointer);

     //print the dereferencing the address by using pointers.
     printf("The int_var_pointer address is:%p\n",int_var_pointer);
     printf("The Float_var_pointer address is:%p\n",Float_var_pointer);
     printf("The char_var_pointer address is:%p\n",char_var_pointer);

     //using Arithmetic operations using pointers.
     int_var_pointer=int_var_pointer+1;
     Float_var_pointer=Float_var_pointer+1;
     char_var_pointer=char_var_pointer+1;
     printf("The Value int is:%p\n",int_var_pointer);
     printf("The Value float is:%p\n",Float_var_pointer);
     printf("The Value char  is:%p\n",char_var_pointer);







    return 0;
}

