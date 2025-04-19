#include<stdio.h>

int main(){

    int array[10];

    printf("Enter 10 Integers:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&array[i]);
    }

    printf("Array in reverse order:\n");
    for (int i = 9;i >= 0;i--){
        printf(" %d",array[i]);
    }

    return 0;

}
