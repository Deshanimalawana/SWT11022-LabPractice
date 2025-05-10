#include<stdio.h>
int gcd(int a, int b){if (b==0)
return a;
return gcd(b,a%b);
}
int main(){
int num1, num2;
printf("enter two numbers:");
scanf(" %d %d",&num1,&num2);
int result = gcd(num1,num2);
printf("gcd of %d and %d : %d",num1,num2,result);
return 0;
}
