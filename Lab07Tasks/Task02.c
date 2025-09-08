#include <stdio.h>

int main(){
    int num = 1;
    while (num <= 100){
        if (num % 2 == 1){
            printf("%d\n", num);
        }
        num++;
        
    }
    return 0;
}