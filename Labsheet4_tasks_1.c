#include <stdio.h>

    int main() {

//Declare three integer variables a, b, and c with any values.

        int a = 5;
        int b = 10;
        int c = 15;


//Find the largest number among the three using comparison operators.

        int large_num;

        if (a >= b && a >= c) {
            large_num = a;
        } else if (b >= a && b >= c) {
            large_num = b;
        } else {
            large_num = c;
        }

        printf("Largest number is: %d\n", (a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c);


//Use arithmetic operators to calculate the average.

        float avg = (a+b+c)/3;

        printf("Avarage: %.2f\n", avg);

    return 0;
}
