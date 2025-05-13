#include <stdio.h>

int add(int a, int b){
    return a+b;
}

int sub(int a , int b){
    return a-b;
}

int devi(int a, int b){
    return a/b;
}

int multi(int a , int b){
    return a*b;
}

int main(){
    int a,b;
    printf("Enter the value for a: ");
    scanf("%d",&a);

    printf("Enter the value for b: ");
    scanf("%d",&b);

    printf("Sum of a and b is = %d\n",add(a,b));
    printf("Divition of a and b is = %d\n",devi(a,b));
    printf("Subtraction of a and b is = %d\n",sub(a,b));
    printf("Multiplication of a and b is = %d\n",multi(a,b));

}

