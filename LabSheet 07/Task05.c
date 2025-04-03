#include<stdio.h>
int main (){

    for(int i=2;i<=20;i+=2){
        if(i%2==1) {
            continue;
        }
    printf("%d\n",i);
    }
return 0;
}
