#include <stdio.h>

int main(void){
    int X = 10, Y =4;
    int IsGreaterThan = X > Y;
    int IsEqual = X == Y;
    int IsNotEqual = X != Y;

    printf("Is X Greater than y ? %s\n", IsGreaterThan ? "Yes" : "no");
    printf("Is X Equal to y ? %s\n", IsEqual ? "Yes" : "no");
    printf("Is X Not Equal to y ? %s\n", IsNotEqual ? "Yes" : "no");
}
