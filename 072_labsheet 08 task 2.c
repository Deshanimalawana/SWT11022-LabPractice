#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int x=7,y=9;
    int result=add(x,y);
    printf("%d + %d =%d\n",x,y,result);
    return 0;
}
