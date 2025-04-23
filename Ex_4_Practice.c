#include <stdio.h>
int main(){
    int array[10],i,count = 0,k;

    printf("Enter 10 integer => \n");

    for(i=0; i<10; i++){
        scanf("%d",&array[i]);
    }
    for(i=0; i<10; i++){
            count = 0;
        for(k=0; k<10; k++){
            if(array[i] == array[k]){
            count++;
            }
        }
        if(count == 1){
        printf("%d ",array[i]);
        }
    }
    return 0;
}
