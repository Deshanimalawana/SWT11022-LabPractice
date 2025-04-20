#include <stdio.h>

int main(){
    char array1[10]={'a','b','c','d','e','f','g','h','i','j'};
    char array2[10];
    for(int i = 0;i<10;i++){
        array2[i]=array1[i];
    }

    printf("Original Array\n");
    for(int i = 0;i<10;i++){
        printf("%c\n",array1[i]);
    }

    printf("Duplicate Array\n");
    for(int i = 0;i<10;i++){
        printf("%c\n",array2[i]);
    }
}
