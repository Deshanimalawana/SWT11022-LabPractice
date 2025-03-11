#include<stdio.h>

int main() {
    int val;
    printf("Enter the value : ");
    scanf("%d",&val);

    if(val > 0) {
        printf("The number is Positive.");
    } else if(val < 0) {
        printf("The number is Negative.");
    } else {
        printf("The number is Zero.");
    }
}
