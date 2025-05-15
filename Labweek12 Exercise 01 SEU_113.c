#include<stdio.h>
int main()
{
    int int_var = 49;
    float float_var = 57.234;
    char char_var = 'A';

    printf("Int_var =%d\nFloat_var = %.3f\nChar_var = %c\n\n",int_var,float_var,char_var);

    printf("Int_var address = %d\nFloat_var address = %d\nChar_var address = %d\n\n",&int_var,&float_var,&char_var);

    int *int_var_pointer;
    float *float_var_pointer;
    char *char_var_pointer;

    int_var_pointer = &int_var;
    float_var_pointer = &float_var;
    char_var_pointer = &char_var;

    printf("int_var_pointer = %d\nfloat_var_pointer = %d\nchar_var_pointer = %d\n\n",int_var_pointer,float_var_pointer,char_var_pointer);//F)

    printf("int_var = %d\nfloat_var = %.3f\nchar_var = %c\n\n",*int_var_pointer,*float_var_pointer,*char_var_pointer);

    printf("int_var_pointer+1 = %d\nfloat_var_pointer+1 = %d\nchar_var_pointer+1 = %d\n\n",(void*)(int_var_pointer + 1),(void*)(float_var_pointer+1),(void*)(char_var_pointer+1));

    return 0;
}
