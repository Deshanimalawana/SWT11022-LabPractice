#include<stdio.h>
int main()
 {
    int a=12, b=30, c=60;

    int largest = (a > b && a > c) ? a : ((b > a && b > c) ? b : c);

    printf("The largest number is: %d\n", largest);

    return 0;

}
