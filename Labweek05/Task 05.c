#include<stdio.h>

int main() {
    int val;
    printf("Enter the value : ");
    scanf("%d",&val);

    if(val > 0) {
        printf("\nThe number is Positive.\n");
    } else if(val < 0) {
        printf("\nThe number is Negative.\n");
    } else {
        printf("\nThe number is Zero.\n");
    }
}

