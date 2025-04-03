#include <stdio.h>
int square (int num) {
    return num * num;
}
int main () {
    int number;
    printf("Enter the Number :- ");
    scanf("%d", &number);
    int results = square(number);
    printf("The square of %d is %d\n", number,results);
    return 0;
}
