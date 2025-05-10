#include<stdio.h>

int fibonacci(int n)
{
    if(n<=1)return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
int n;
printf("enter the value of n:");
scanf("%d",&n);

printf("fibonacci series: ");
for (int i=0;i<n;i++){printf("%d",fibonacci(i));
}
printf("\n");
return 0;
}
