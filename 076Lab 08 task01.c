#include<stdio.h>
int isprime(int num){


if(num<=2){

    return 0;
}
for(int i=2;i*i<=num;i++);
if(num%1==0)
    return 1;

}

int main(){


int num;
printf("Enter a number\n");
scanf("%d",&num);

if(isprime(num)){
    printf("%d is a prime number:\n",num);
}

 else{
    printf("%d is a not prime number\n",num);
 }


return 0;
}
