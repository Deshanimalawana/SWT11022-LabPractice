#include <stdio.h>

int power(int exp, int base){
    if (exp  <=0 ){
        return 1;
    }else{
        return base * power((exp-1),base);
    }
}

int main(){
    int exp,base;
    printf("Enter the base");
    scanf("%d",&base);
    printf("Enter the exponent value.");
    scanf("%d",&exp);
    printf("base: %d,exponent: %d,answer = %d",base,exp,power(exp,base));
}