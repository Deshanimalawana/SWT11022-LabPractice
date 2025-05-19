#include<stdio.h>

int main() {
    int A,B,C;
    printf("Enter three values : ");
    scanf("%d %d %d",&A,&B,&C);

    if(A > B){
        if(A > C){
            printf("\nLargest number is %d\n",A);
        }else {
            printf("\nLargest number is %d\n",C);
        }
    }else if (B > C) {
        printf("\nLargest number is %d\n",B);
    }else {
        printf("\nLargest number is %d\n",C);
    }
}
