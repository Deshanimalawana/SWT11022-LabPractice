#include<stdio.h>

int main(){
    int arr[10];


    printf("Enter Values...\n");
    for(int i = 0; i < 10; i++){
        scanf("%d",&arr[i]);
    }

    printf("Values In Reverse..\n");
    for(int i = 9; i >= 0; i--){
        printf("\n%d", arr[i] );
    }
    return 0;
}
