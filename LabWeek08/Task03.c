#include <stdio.h>
int gcd(int a, int b){
    if(b==0){
        return a;
    } else{
        return gcd(b,a%b);
    }
}

int main(){
    int num1 =10,num2 =100;

    printf("%d",gcd(num1,num2));
}
