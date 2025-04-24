#include <stdio.h>

int main(){
    int num1 = 100;
    int num2 = 200;
    int *pointer1,*pointer2;
    int temp;

    pointer1 = &num1;
    pointer2 = &num2;

    printf("before Swapping\n");
    printf("Num1 = %d \n Num2 = %d\n",num1,num2);

    temp = *pointer2;
    *pointer2 = *pointer1;
    *pointer1 = temp;

    printf("After swapping pointer \n num1: %d \nnum2: %d",num1,num2);
}
