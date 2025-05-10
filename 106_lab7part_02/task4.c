#include<stdio.h>

int main(){
    int x;
    while(1){
        printf("enter a number: ");
        scanf("%d", &x);
        if(x < 0){
            printf("negative number entered.exiting...\n");
            break;
            }
    }
    return 0;
}
