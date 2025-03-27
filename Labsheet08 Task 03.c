#include<stdio.h>
int gcd(int a,int b);

int main()
{
    int a,b;

    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);

    printf("The GCD of %d and %d is : %d\n",a,b,gcd(a,b));
    return 0;
}
int gcd (int a, int b){
if(b == 0){
        return a;
        }
else
{
    return gcd(b,a %b);
}}
