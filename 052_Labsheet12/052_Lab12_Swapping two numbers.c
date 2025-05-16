#include <stdio.h>

int main(){
    int num1=10,num2=20;
    int *ptr1,*ptr2;
    int temp;


    ptr1 =&num1;
    ptr2 =&num2;

    printf("Before swapping \n");
    printf("num1 = %d\nnum2=%d\n",num1,num2);


    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;


    printf("After swapping\n");
    printf("num1=%d\nnum2=%d\n",num1,num2);

    return 0;



}
