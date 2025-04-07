#include <stdio.h>

int fibonacci(int n){
    for (int i = 1;n>i;i++){
        return fibonacci(n-1) + fibonacci(n-2);
    }
    }

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("%d",fibonacci(num));
}
