#include <stdio.h>
int gcd(int a,int b){
while (b!=0){
    int com=b;
    b=a%b;
    a=com;
}
return a;
}

int main(){
    int num1,num2;
    printf("input number:");
    scanf("%d",&num1);
    printf("input number:");
    scanf("%d",&num2);

    printf("GCD of %d and %d is %d",num1,num2,gcd(num1,num2));
    return 0;
}
