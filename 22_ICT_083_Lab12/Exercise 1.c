#include<stdio.h>
int main(){
   int int_var=45;
   float float_var=57.234;
   char char_var='A';

   printf("Value Of int_var : %d\n",int_var);
   printf("Value of float_var : %.3f\n",float_var);
   printf("Value of char_var : %c\n\n",char_var);

   printf("Address of int_var: %p\n",&int_var);
   printf("Address of float_var: %p\n",&float_var);
   printf("Address of char_var: %p\n\n",&char_var);

   int *int_var_pointer;
   float *float_var_pointer;
   char *char_var_pointer;

   int_var_pointer=&int_var;
   float_var_pointer=&float_var;
   char_var_pointer=&char_var;

   printf("Address of int_var_pointer : %p\n",&int_var_pointer);
   printf("Address of *float_var_pointer : %p\n",&float_var_pointer);
   printf("Address of *char_var-pointer : %p\n\n",&char_var_pointer);

   printf("Value of int_var_pointer: %d\n",*int_var_pointer);
   printf("Value of float_var_pointer: %.3f\n",*float_var_pointer);
   printf("Value of char_var_pointer: %c\n\n",*char_var_pointer);

   int_var_pointer +=1;
   float_var_pointer +=1;
   char_var_pointer +=1;

   printf("\nint_var_pointer_Arithmetic: %p\n",int_var_pointer);
   printf("float_var_pointer_Arithmetic: %p\n",float_var_pointer);
   printf("char_var_pointer_Arithmetic: %p\n",char_var_pointer);

   return 0;

   }
