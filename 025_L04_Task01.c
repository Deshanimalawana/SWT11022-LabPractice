#include <stdio.h>
int main()
{
    int a = 15, b = 35, c = 20;
    int largest = (a > b) ? ((a > c)? a:c): ((b > c)? b: c);
    printf("The largest number is: %d\n", largest);

    float average = (a+b+c)/3.0;
    printf("The average of the three number is: %.2f\n", average);

    return 0;
}
