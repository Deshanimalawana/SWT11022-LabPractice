#include <stdio.h>
#include <stdlib.h>
int isprime(int num){
     if(num<=1){
        return 0 ;
     }
     for (int n=2; n * n<=num; n++){
        if(num%n==0){
            return 0;
        }
    }

    return 1;

}
int main()
{
    int x;
    printf("Enter the Number:");
    scanf("%d", &x);

    if (isprime(x)){
        printf(" %d is a prime number",x);
    } else{
        printf("%d is not a prime number",x);
    }
    return 0;
}
