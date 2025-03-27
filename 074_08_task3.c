#include<stdio.h>
int gcd(int a, int b);

int gcd(int a, int b){
    if(b==0){
        return a;
    }else{
    return gcd(b,a % b);
}

int main()
{
    int num1,num2;
    printf("Enter the two numbers");
    scanf("%d %d",&num1,&num2);

    printf("The gcd is: %d,%d,%d",num1,num2,gcd(num1,num2));
    return 0;
}
