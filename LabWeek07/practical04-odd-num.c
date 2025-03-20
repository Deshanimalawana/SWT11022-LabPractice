#include <stdio.h>
int main(){
    for(int i = 1;i <=1000000000000; i++){
        if(i%2 ==0){
            continue; //Skip even numbers
        }
        printf("%d",i);
    }
    return 0;
}
