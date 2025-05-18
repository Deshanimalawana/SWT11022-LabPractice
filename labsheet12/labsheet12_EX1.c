#include<stdio.h>
int main(){
int int_var=45;
float float_var=57.234;
char char_var='A';

int *int_var_pointer;
float *float_var_pointer;
char *char_var_pointer;

int_var_pointer = &int_var;
float_var_pointer = &float_var;
char_var_pointer = &char_var;


printf("value of int_var:%d\n", int_var);
printf("value of float_var:%f\n", float_var);
printf("value of char_var:%c\n", char_var);
printf("\n");
printf("Address of int_var:%p\n", &int_var);
printf("Address of float_var:%p\n", &float_var);
printf("Adrees of char_var:%p\n", &char_var);

printf("\n");

printf("value of pointer int_var_pointer:%p\n", int_var_pointer);
printf("value of pointer float_var_pointer:%p\n", float_var_pointer);
printf("value of pointer char_var_pointer:%p\n", char_var_pointer);

printf("\n");

printf("value of pointer int_var_pointer:%d\n", *int_var_pointer);
printf("value of pointer float_var_pointer:%f\n", *float_var_pointer);
printf("value of pointer char_var_pointer:%c\n", *char_var_pointer);

printf("\n");

*int_var_pointer=*int_var_pointer+1;
*float_var_pointer=*float_var_pointer+1;
*char_var_pointer=*char_var_pointer+1;

printf("value of pointer int_var:%d\n", int_var);
printf("value of pointer float_var:%f\n", float_var);
printf("value of pointer char_var:%c\n", char_var);
return 0;
}
