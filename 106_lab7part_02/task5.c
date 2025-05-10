#include<stdio.h>
int main(){

    for(int x = 1; x <= 20; x++){
        if (x % 2 !=0){
            continue;
        }
        printf("%d", x);
    }
    printf("\n");
    return 0;
}
