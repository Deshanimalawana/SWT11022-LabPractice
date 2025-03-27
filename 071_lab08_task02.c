#include<stdio.h>
int fibonacci(int n);

int main () {
    int n,i;
    printf("enter the number");
    scanf("%d",&n);

    printf("fibonacci series up to %d terms:\n",n);

    for (i-0;i<n;i++){
        printf("%d",fibonacci(i));
    }
    printf("\n");
    return 0;
}
  int fibonacci(int n){
    if(n == 0){
        return 0;
    } else if (n == 1){
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }

}
