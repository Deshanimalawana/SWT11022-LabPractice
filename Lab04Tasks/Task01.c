#include <stdio.h>

int main(void){
    int x = 10, y =4;

    int sum = x + y;
    int difference = x - y;
    int product = x * y;
    int quotinent = x / y;
    int remainder = x % y;

    printf("Sum : %d\n", sum);
    printf("Difference : %d\n", difference);
    printf("Product : %d\n", product);
    printf("quotient : %d\n", quotinent);
    printf("remainder : %d\n", remainder);

    return 0;

}
