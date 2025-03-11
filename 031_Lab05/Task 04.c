#include<stdio.h>

int main() {
    int A,B,C;
    printf("Enter three values : ");
    scanf("%d %d %d",&A,&B,&C);

    if(A > B){
        if(A > C){
            printf("Largest number is %d",A);
        }else {
            printf("Largest number is %d",C);
        }
    }else if (B > C) {
        printf("Largest number is %d",B);
    }else {
        printf("Largest number is %d",C);
    }
}
