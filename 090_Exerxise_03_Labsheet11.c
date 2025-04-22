#include<stdio.h>
int main(){

    char arr[10];
    char duplicate[10];

    printf("Enter any 10 characters: \n");
    for(int i=0; i<10; i++){
        scanf(" %c",&arr[i]);
    }

    for(int i=0; i<10; i++){
            duplicate[i] = arr[i];
    }

    printf("First array:\n");
    for(int i=0; i<10; i++){
        printf("%c ",arr[i]);
    }

    printf("\nDuplicated array:\n");
    for(int i=0; i<10; i++){
        printf("%c ",duplicate[i]);
    }
    printf("\n");

    return 0;
}


