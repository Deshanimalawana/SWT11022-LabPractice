#include <stdio.h>
int main(){
    int value;

    printf("Enter a Value\n");
    scanf("%d", &value);
    if (value>0){
        printf("The number is positive");
    } else if(value<0){
        printf("The number is negative");
    } else {
        printf("The number is zero");
    }
    return 0;
}
