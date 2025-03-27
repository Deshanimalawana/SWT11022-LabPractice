#include <stdio.h>

int gcd(int a,int b) {
    return (b==0) ? a: gcd(b,a%b);
}

int main() {
int a,b;
printf("Enter your first number: ");
scanf("%d",&a);
printf("Enter your second number: ");
scanf("%d",&b);
printf("%d",gcd(a,b));

return 0;


}
