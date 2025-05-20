#include<stdio.h>
int main(){

int int_var=45;
float float_var=57.234;
char char_var='A';


printf("value of int_var : %d\n",int_var);
printf("value of float_var : %f\n",float_var);
printf("value of char_var : %c\n",char_var);

printf("\nAddress of int_var : %p\n",&int_var);
printf("Address of float_var : %p\n",&float_var);
printf("Address of char_var : %p\n",&char_var);

int *int_var_pointer;
float *float_var_pointer;
char *char_var_pointer;

int_var_pointer=&int_var;
float_var_pointer=&float_var;
char_var_pointer=&char_var;

printf("\nint_var_pointer: %p\n",int_var_pointer);
printf("float_var_pointer: %p\n",float_var_pointer);
printf("char_var_pointer: %p\n",char_var_pointer);


printf("\nvalue of int_var : %d\n",*int_var_pointer);
printf("value of float_var : %f\n",*float_var_pointer );
printf("value of char_var : %c\n",*char_var_pointer);


printf("\n%p\n", int_var_pointer+1);
printf("%p\n", float_var_pointer+1);
printf("%p\n", char_var_pointer+1);

return 0;
}
