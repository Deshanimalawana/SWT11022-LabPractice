#include <stdio.h>
int main(){
    int number;
    printf("Enter a number");
    scanf("%d",&number);

    if (number>0){
        printf("The number is Positive");
    }
    else if (number<0){
        printf("The number is negative");
    }
    else {
        printf("The number is zero");
    }
    return 0;
}
