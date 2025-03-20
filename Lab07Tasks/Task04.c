#include <stdio.h>

int main(){
    int Num;
    while (1){
        printf("Enter a number : ");
        scanf("%d", &Num);
        if (Num <0){
            break;
        }
    }
    return 0;
}