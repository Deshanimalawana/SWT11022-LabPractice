#include <stdio.h>
int fibonacci(int n) {
     if (n <= 1){
        return n;   }
     else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
     int number;
     printf("enter the number :");
     scanf("%d",&number);

     printf("fibonacci sequance up to %d terms:\n",number);
     for(int i = 0; i<number; i++){
     printf("%d", fibonacci(i));
     }

    printf("\n");
     return 0;
}
