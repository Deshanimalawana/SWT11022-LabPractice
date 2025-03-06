#include<stdio.h>
int main()
 {
    int a=12, b=30, c=60;

    // Find the largest number using comparison operators
    int largest = (a > b && a > c) * a + (b > a && b > c) * b + (c > a && c > b) * c;

    // Output the largest number
    printf("The largest number is: %d\n", largest);

    return 0;

}
