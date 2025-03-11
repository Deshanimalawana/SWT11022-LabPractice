#include<stdio.h>

int main() {

    int Num;
    printf("Enter a Number : ");
    scanf("%d",&Num);
    int Bal;
    Bal = Num%2;

    if (Bal == 0) {
        printf("The number is even.");
    }else {
        printf("The number is odd.");
    }

}
