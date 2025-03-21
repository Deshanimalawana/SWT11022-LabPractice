#include<stdio.h>
int main (){
    int x=-5;

    printf("Enter Number");
    scanf("%d",&x);

    if ( x > 0){
        printf("Positive Number");
    }
    else if ( x < 0){
        printf("Negative Number");
    }
    else {
        printf("The Number is Zero");
    }
    return 0;
}
