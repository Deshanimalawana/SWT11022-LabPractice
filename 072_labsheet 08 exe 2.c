#include<stdio.h>
int fibonacci(int n){
    if(n<=1){
        return n;
    }
        return fibonacci(n-1)+ fibonacci(n-2);
}
int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("Fibonacci sequence up to %d terms: ",n);
    for(int i=0;i<n;i++){
        printf("%d",fibonacci(i));
    }
    return 0;
}
