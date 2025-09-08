#include<stdio.h>
int main(){
    int array[10];

    printf("Enter 10 integer numbers:\n");
    for (int i=0; i<10; i++){
        scanf("%d",&array[i]);
    }

    printf("\nReserve Order\n");
    for (int i=9; i>=0; i--){
        printf("%d \n",array[i]);
    }

    return 0;
}
