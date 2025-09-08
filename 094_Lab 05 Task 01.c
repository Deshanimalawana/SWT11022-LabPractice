#include <stdio.h>
int main () {
    int num;

    //update input
    printf("Enter a number:");
    scanf("%d", &num);

    //check even or odd number
    if (num % 2 == 0){
        printf("The number is even.\n");
    }else {
        printf("The number is odd.\n");

    }
return 0;
}
