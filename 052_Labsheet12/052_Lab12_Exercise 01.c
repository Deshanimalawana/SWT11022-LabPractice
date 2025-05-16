#include <stdio.h>
int main(){
    int int_var=45;
    float Float_var = 57.234;
    char char_var ='A';

    int *int_var_pointer =&int_var;
    float *Float_var_pointer=&Float_var;
    char *char_var_pointer=&char_var;


    printf("Normal Value:\n");
    printf("%d \n%.3f\n%c\n ",int_var,Float_var,char_var);
    printf("\n");

    printf("Adress of Above Variable:\n");
    printf("%p\n%p\n%p\n",&int_var,&Float_var,&char_var);
    printf("\n");

    printf("Pointers Value :\n");
    printf("%d\n%.3f\n%c\n",*int_var_pointer,*Float_var_pointer,*char_var_pointer);
    printf("\n");

    printf("Arithmatic operators:\n");
    printf("%d\n",*int_var_pointer+1);
    printf("%.3f\n",*Float_var_pointer+1);
    printf("%c\n",*char_var_pointer+1);


    return 0;


}

