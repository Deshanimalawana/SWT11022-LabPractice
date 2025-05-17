#include <stdio.h>
#include <stdlib.h>
int main(){
    int num [10];
    printf("Enter the 10 integers number: ");
    for(int i=0; i<10;i++){
        scanf("%d", &num[i]);
        printf("%d ", num[i]);
        }

        printf("\nAfter reverse\n");
        for(int x=9; x<10; x--){
            if (x < 0){
                break;
            }else{
                printf("%d ", num[x]);
            }
        }


    return 0;
}
