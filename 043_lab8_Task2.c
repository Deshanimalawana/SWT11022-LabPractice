#include <stdio.h>
int fibonacci(int n){
    if (n<=1)
        return n;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Fibonacci sequance up to %d:\n", num);

    for (int i=0;i<num;i++){
        printf("%d", fibonacci(i));
    }
    printf("\n");
    return 0;
}
