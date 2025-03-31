#include<stdio.h>
int isPrime(int num){

if(num < 2) return 0;

for(int i = 2; i * i <= num; i++)
    {if(num % i == 0)
    return 0;

}
return 1;
}
int main(){

int num;
printf("enter number :");
scanf("%d",&num);
if(isprime(num)){
    printf("%d is a prime number",num);
}else{
    printf("%d is not a prime number",num);}
return 0;
}
