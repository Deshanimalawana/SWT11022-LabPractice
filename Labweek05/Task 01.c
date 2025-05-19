#include<stdio.h>

int main() {

    int Num;
    printf("Enter a Number : ");
    scanf("%d",&Num);
    int Bal;
    Bal = Num%2;

    if (Bal == 0) {
        printf("\nThe number is even.\n");
    }else {
        printf("\nThe number is odd.\n");
    }

}
