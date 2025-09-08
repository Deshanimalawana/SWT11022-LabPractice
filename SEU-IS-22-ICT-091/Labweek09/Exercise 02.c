#include <stdio.h>
#include <stdlib.h>

void printStars(int n){

    for (int i ; n > i; i++){
        printf("*");
    }
}

int main (){

    int n;
    printf("Enter a Number :");
    scanf("%d", &n);

    printStars(n);

    return 0;
}
