#include <stdio.h>

int main() {
    int number;
    printf("enter a number:");
    scanf("%d",&number);

    if (number>0) {
        printf(" the number is positive.\n");
    } else if (number < 0) {
        printf(" the number is Negative.\n");
    } else {
    printf(" the number is zero.\n");
    }
    return 0;
}










