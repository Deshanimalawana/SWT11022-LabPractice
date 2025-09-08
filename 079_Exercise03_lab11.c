#include<stdio.h>
int main(){
    char array[10];
    char arrayNew[10];

    printf("Enter 10 characters:\n");
    for(int i=0;i<10;i++){

        scanf(" %c",&array[i]);
    }
    for(int i=0;i<10;i++){
        arrayNew[i]=array[i];
    }
    printf("\nFirst array: ");
    for(int i=0;i<10;i++){
        printf("%c ",array[i]);
    }
    printf("\nDuplicate Array:");
     for(int i=0;i<10;i++){
        printf("%c ",arrayNew[i]);
}
return 0;
}
