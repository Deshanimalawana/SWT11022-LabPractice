#include<stdio.h>
int main(){
    for (int i = 1; i <= 20; i ++){
        if(i %2 ==1){
            continue;
        }
        printf("%d\t",i );
    }
    return 0;
}
