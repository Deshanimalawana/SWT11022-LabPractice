#include<stdio.h>

int fibonacci(int n){
    if (n <= 1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n - 2);
}

int main(){
    int terms, i;

    printf("Enter the number of terms in Fibonacci sequence: ");
    scanf("%d",&terms);

    if (terms < 1){
        printf("please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci sequwnce up to %d terms :\n",terms);
    for (i = 0; i < terms; i++){
        printf("%d",fibonacci(i));
    }
    printf("\n");
    return 0;
}

