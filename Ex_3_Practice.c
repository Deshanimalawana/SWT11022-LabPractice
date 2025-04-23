#include <stdio.h>
int main(){
    char char_array[10],char_copy[10];
    int i;

    printf("Enter 10 characters => \n");

    for(i=0; i<10; i++){
        scanf("\n%c",&char_array[i]);
    }

    for(i=0; i<10; i++){
        char_copy[i] = char_array[i];
    }

    for(i=0; i<10; i++){
        printf("%c ",char_array[i]);
    }
    printf("\n");
    for(i=0;i<10;i++){
        printf("%c ",char_copy[i]);
    }

    return 0;
}
