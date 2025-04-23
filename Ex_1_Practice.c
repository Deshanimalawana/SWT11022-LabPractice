#include <stdio.h>
int main(){
    int array[10],i;

    printf("Enter 10 integer => \n");

    for(i=0; i<10; i++){
        scanf("%d",&array[i]);
    }
    printf("\n");

    for(i=9; i>=0; i--){
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
