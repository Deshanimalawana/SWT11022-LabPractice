#include <stdio.h>

int main() {
    int a = 4, b = 8, c = 12;

    int largestnum;
    float average;

        largestnum = (a >= b && a >= c) ? a : ( (b >= a && b >= c) ? b : c);

        (largestnum % 2 == 0) ?

    printf("Largest number is: %d \n", largestnum) : printf("Largest number is: %d \n", largestnum);


    average = (a + b + c) / 3;


    printf("Average is: %.2f\n", average);

return 0;

}
