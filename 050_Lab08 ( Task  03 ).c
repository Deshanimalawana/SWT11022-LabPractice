#include <stdio.h>
int gcd (int a, int b);

int main(){
    int a, b;

    printf("Enter a number A:");
    scanf("%d",&a);
    printf("Enter a number B:");
    scanf("%d",&b);

    printf("GCD of %d  and %d is %d.\n", a, b, gcd(a,b));
    return 0;
}

int gcd (int a, int b){
    if (b != 0)
        return gcd(b, a % b);
    else
        return a;
}
