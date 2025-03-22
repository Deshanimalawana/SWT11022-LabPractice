#include<stdio.h>
int main(){
    int a = 10;
    int b = 20;
    int c = 30;
    int largestNumber = (a>b)?(a>c? a:c):(b>c? b:c);

    printf("The Largest Number is: %d\n",largestNumber);
    return 0;
}
