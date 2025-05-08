#include <stdio.h>
int main(){
    char originalArray[10]= {'a','b','c','d','e','f','g','h','i','j'};
    char duplicateArray[10];

    for(int i=0; i<10; i++){
        duplicateArray[i] = originalArray[i];
    }

    printf("Original Array:");
    for(int i=0; i<10; i++){
        printf("%c",originalArray[i]);
    }

    printf("\nDuplicate Array:");
    for(int i=0; i<10; i++){
        printf("%c",duplicateArray[i]);
    }

    printf("\n");


    return 0;

}
