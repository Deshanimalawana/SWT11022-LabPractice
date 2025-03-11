#include <stdio.h>
int main(){

    int a=56;
    int b=20;
    int c=70;

    int largestNumber;

    largestNumber = (a>b) ? ((a>c)? a : c ) : ((b>c) ? b : c);

    printf("Largest Number is:%d\n", largestNumber);

    return 0;

}
