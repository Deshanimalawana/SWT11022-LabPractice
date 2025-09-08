#include<stdio.h>
int gcd(int a,int b){
   if(b==0){
        return a;
   }
        else {
            return gcd(b,a%b);
        }

   }
   int main(){
   int num1,num2;
   printf("Enter a number: ");
   scanf("%d %d",&num1,&num2);
   int result=gcd (num1,num2);
   printf("The gcd of %d an %d is %d\n",num1,num2,result);
   return 0;
}
