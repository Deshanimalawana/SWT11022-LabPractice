#include <stdio.h>
int main(){

    int a=10, b=20, c=30;
    int largest;

    if (a >= b && a >= c)
        printf("The largest number is:%d\n",a);
    else if (b >= a && b >= c)
        printf("The largest number is:%d\n",b);
    else
        printf("The largest number is:%d\n",c);

    return 0;
}
