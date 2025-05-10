#include<stdio.h>
int main(){
    int num;
    while(1){
        printf("Enter number :");
        scanf("%d",&num);
        if (num < 0){
            break;
        }

    }
    printf("Negative Number entered");
    return 0;
}

